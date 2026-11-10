
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v, weight;
};

// Disjoint Set Union (Union-Find)
class DSU {
    vector<int> parent, size;

public:
    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    // Find the representative of a set
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);

        return parent[x];
    }

    // Merge two sets
    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU == rootV)
            return;

        if (size[rootU] < size[rootV])
            swap(rootU, rootV);

        parent[rootV] = rootU;
        size[rootU] += size[rootV];
    }
};

// Kruskal's Algorithm
void kruskal(int V, vector<Edge>& edges) {

    // Sort edges in non-decreasing order of weight
    sort(edges.begin(), edges.end(),
         [](Edge a, Edge b) {
             return a.weight < b.weight;
         });

    DSU dsu(V);

    vector<Edge> MST;
    int totalWeight = 0;

    // Process edges in increasing order of weight
    for (auto edge : edges) {

        // Check whether adding the edge creates a cycle
        if (dsu.find(edge.u) != dsu.find(edge.v)) {

            MST.push_back(edge);
            totalWeight += edge.weight;

            dsu.unite(edge.u, edge.v);
        }

        // MST contains V-1 edges
        if (MST.size() == V - 1)
            break;
    }

    // Display the Minimum Spanning Tree
    if (MST.size() != V - 1) {
        cout << "Minimum Spanning Tree does not exist.\n";
        return;
    }

    cout << "\nEdges in the Minimum Spanning Tree:\n";

    for (auto edge : MST) {
        cout << edge.u << " - "
             << edge.v << " : "
             << edge.weight << endl;
    }

    cout << "\nTotal weight of MST = "
         << totalWeight << endl;
}

int main() {

    int V, E;

    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<Edge> edges(E);

    cout << "Enter edges (source destination weight):\n";

    for (int i = 0; i < E; i++) {
        cin >> edges[i].u
            >> edges[i].v
            >> edges[i].weight;
    }

    kruskal(V, edges);

    return 0;
}

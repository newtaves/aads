#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// structure for storing one edge of the graph
struct GraphEdge {
    int u, v, weight;
};

// ==================== DSU class ====================

class DSU {
    vector<int> parent, sz;

public:
    DSU(int n);
    int find(int x);
    void unite(int u, int v);
};

// ---------- DSU methods ----------

DSU::DSU(int n) {
    parent.resize(n);
    sz.resize(n, 1);

    for (int i = 0; i < n; i++) { parent[i] = i; }
}

int DSU::find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);

    return parent[x];
}

void DSU::unite(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);

    if (rootU == rootV) return;

    // attach the smaller tree under the bigger tree
    if (sz[rootU] < sz[rootV])
        swap(rootU, rootV);

    parent[rootV] = rootU;
    sz[rootU] += sz[rootV];
}

// function prototype (implementation is at the bottom)
void kruskalAlgorithm(int V, vector<GraphEdge>& edgeList);

// ==================== main ====================

int main()
{
    int V, E;

    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<GraphEdge> edgeList(E);

    cout << "Enter edges (source destination weight):\n";

    for (int i = 0; i < E; i++) {
        cin >> edgeList[i].u >> edgeList[i].v >> edgeList[i].weight;
    }

    kruskalAlgorithm(V, edgeList);

    return 0;
}

// ==================== kruskalAlgorithm ====================

void kruskalAlgorithm(int V, vector<GraphEdge>& edgeList) {

    // sort all the edges in increasing order of weight
    sort(edgeList.begin(), edgeList.end(), [](GraphEdge a, GraphEdge b) { return a.weight < b.weight; });

    DSU dsu(V);

    vector<GraphEdge> minimumSpanningTree;
    int totalWeight = 0;

    for (auto currentEdge : edgeList)
    {
        // skip the edge when both ends are already connected
        if (dsu.find(currentEdge.u) != dsu.find(currentEdge.v))
        {
            minimumSpanningTree.push_back(currentEdge);
            totalWeight += currentEdge.weight;

            dsu.unite(currentEdge.u, currentEdge.v);
        }

        // the spanning tree is complete with V-1 edges
        if (minimumSpanningTree.size() == V - 1)
            break;
    }

    // less than V-1 edges means the graph was disconnected
    if (minimumSpanningTree.size() != V - 1) {
        cout << "Minimum Spanning Tree does not exist.\n";
        return;
    }

    cout << "\nEdges in the Minimum Spanning Tree:\n";

    for (auto currentEdge : minimumSpanningTree) {
        cout << currentEdge.u << " - " << currentEdge.v << " : " << currentEdge.weight << endl;
    }

    cout << "\nTotal weight of MST = " << totalWeight << endl;
}

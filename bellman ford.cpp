
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v, weight;
};

// Bellman-Ford Algorithm
void bellmanFord(int V, int E, vector<Edge>& edges, int source) {

    vector<int> dist(V, INT_MAX);

    // Initialize source distance as 0
    dist[source] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {

        for (auto edge : edges) {

            int u = edge.u;
            int v = edge.v;
            int w = edge.weight;

            if (dist[u] != INT_MAX &&
                dist[u] + w < dist[v]) {

                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative weight cycles
    for (auto edge : edges) {

        int u = edge.u;
        int v = edge.v;
        int w = edge.weight;

        if (dist[u] != INT_MAX &&
            dist[u] + w < dist[v]) {

            cout << "Graph contains a negative weight cycle.\n";
            return;
        }
    }

    // Display shortest distances
    cout << "\nShortest distances from source vertex "
         << source << ":\n";

    cout << "Vertex\tDistance\n";

    for (int i = 0; i < V; i++) {

        cout << i << "\t";

        if (dist[i] == INT_MAX)
            cout << "INF";
        else
            cout << dist[i];

        cout << endl;
    }
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

    int source;

    cout << "Enter source vertex: ";
    cin >> source;

    bellmanFord(V, E, edges, source);

    return 0;
}

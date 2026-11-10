#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// structure for storing one edge of the graph
struct GraphEdge {
    int sourceVertex, destinationVertex, edgeWeight;
};

typedef vector<GraphEdge> EdgeList;

// function prototype (the implementation is at the bottom)
void bellmanFordAlgorithm(int V, int E, EdgeList& edgeList, int sourceVertex);

// ==================== main ====================

int main()
{
    int V, E;

    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    EdgeList edgeList(E);

    cout << "Enter edges (source destination weight):\n";

    for (int i = 0; i < E; i++) {
        cin >> edgeList[i].sourceVertex >> edgeList[i].destinationVertex >> edgeList[i].edgeWeight;
    }

    int sourceVertex;

    cout << "Enter source vertex: ";
    cin >> sourceVertex;

    bellmanFordAlgorithm(V, E, edgeList, sourceVertex);

    return 0;
}

// ==================== bellmanFordAlgorithm ====================

void bellmanFordAlgorithm(int V, int E, EdgeList& edgeList, int sourceVertex)
{
    vector<int> shortestDistance(V, INT_MAX);

    // the distance of the source from itself is zero
    shortestDistance[sourceVertex] = 0;

    // relax every edge (V-1) times
    for (int pass = 1; pass <= V - 1; pass++)
    {
        for (auto currentEdge : edgeList)
        {
            int u = currentEdge.sourceVertex;
            int v = currentEdge.destinationVertex;
            int w = currentEdge.edgeWeight;

            if (shortestDistance[u] != INT_MAX && shortestDistance[u] + w < shortestDistance[v])
            {
                shortestDistance[v] = shortestDistance[u] + w;
            }
        }
    }

    // one extra pass for detecting negative weight cycles
    for (auto currentEdge : edgeList)
    {
        if (shortestDistance[currentEdge.sourceVertex] != INT_MAX &&
            shortestDistance[currentEdge.sourceVertex] + currentEdge.edgeWeight < shortestDistance[currentEdge.destinationVertex])
        {
            cout << "Graph contains a negative weight cycle.\n";
            return;
        }
    }

    // printing the result table
    cout << "\nShortest distances from source vertex " << sourceVertex << ":\n";
    cout << "Vertex\tDistance\n";

    for (int i = 0; i < V; i++)
    {
        cout << i << "\t";

        if (shortestDistance[i] == INT_MAX) { cout << "INF"; }
        else { cout << shortestDistance[i]; }

        cout << endl;
    }
}

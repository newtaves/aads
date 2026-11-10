#include <iostream>
#include <climits>
using namespace std;

struct Edge
{
    int u, v, weight;
};

void bellmanFord( int V, int E, Edge* edges, int src );

int main( void )
{
    int V, E;

    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    Edge* edges = new Edge[ E ];

    cout << "Enter edges (source destination weight):\n";

    for( int i = 0 ; i < E ; i++ )
    {
        cin >> edges[ i ].u >> edges[ i ].v >> edges[ i ].weight;
    }

    int src;

    cout << "Enter source vertex: ";
    cin >> src;

    bellmanFord( V, E, edges, src );

    delete[] edges;

    return 0;
}

/* ------- bellmanFord implementation ------- */

void bellmanFord( int V, int E, Edge* edges, int src )
{
    int* dist = new int[ V ];

    for( int i = 0 ; i < V ; i++ )
        dist[ i ] = INT_MAX;

    dist[ src ] = 0;

    // relax all the edges (V-1) times
    for( int pass = 1 ; pass <= V - 1 ; pass++ )
    {
        for( int j = 0 ; j < E ; j++ )
        {
            int u = edges[ j ].u;
            int v = edges[ j ].v;
            int w = edges[ j ].weight;

            if( dist[ u ] != INT_MAX && dist[ u ] + w < dist[ v ] )
                dist[ v ] = dist[ u ] + w;
        }
    }

    // check for a negative weight cycle
    for( int j = 0 ; j < E ; j++ )
    {
        if( dist[ edges[ j ].u ] != INT_MAX && dist[ edges[ j ].u ] + edges[ j ].weight < dist[ edges[ j ].v ] )
        {
            cout << "Graph contains a negative weight cycle.\n";
            delete[] dist;
            return;
        }
    }

    cout << "\nShortest distances from source vertex " << src << ":\n";
    cout << "Vertex\tDistance\n";

    for( int i = 0 ; i < V ; i++ )
    {
        cout << i << "\t";

        if( dist[ i ] == INT_MAX )
            cout << "INF";
        else
            cout << dist[ i ];

        cout << endl;
    }

    delete[] dist;
}

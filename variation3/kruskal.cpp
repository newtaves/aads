#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
    int u, v, weight;
};

// global arrays used by the union find
vector<int> par, sz;

void make_set( int n );
int find( int x );
void unite( int u, int v );
void kruskal( int V, int E, Edge* edges );

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

    kruskal( V, E, edges );

    delete[] edges;

    return 0;
}

/* ------- union find implementation ------- */

void make_set( int n )
{
    par.resize( n );
    sz.assign( n, 1 );

    for( int i = 0 ; i < n ; i++ )
        par[ i ] = i;
}

int find( int x )
{
    if( par[ x ] != x )
        par[ x ] = find( par[ x ] );

    return par[ x ];
}

void unite( int u, int v )
{
    int rootU = find( u );
    int rootV = find( v );

    if( rootU == rootV )
        return;

    if( sz[ rootU ] < sz[ rootV ] )
        swap( rootU, rootV );

    par[ rootV ] = rootU;
    sz[ rootU ] += sz[ rootV ];
}

/* ------- kruskal implementation ------- */

void kruskal( int V, int E, Edge* edges )
{
    // sort the edges by increasing weight
    sort( edges, edges + E, []( Edge a, Edge b ) { return a.weight < b.weight; } );

    make_set( V );

    vector<Edge> mst;
    int totalWeight = 0;

    // process the edges in increasing order of weight
    for( int i = 0 ; i < E ; i++ )
    {
        // skip the edge when it creates a cycle
        if( find( edges[ i ].u ) != find( edges[ i ].v ) )
        {
            mst.push_back( edges[ i ] );
            totalWeight += edges[ i ].weight;

            unite( edges[ i ].u, edges[ i ].v );
        }

        // the mst is complete with V-1 edges
        if( mst.size() == V - 1 )
            break;
    }

    if( mst.size() != V - 1 )
    {
        cout << "Minimum Spanning Tree does not exist.\n";
        return;
    }

    cout << "\nEdges in the Minimum Spanning Tree:\n";

    int mstSize = mst.size();

    for( int i = 0 ; i < mstSize ; i++ )
    {
        cout << mst[ i ].u << " - " << mst[ i ].v << " : " << mst[ i ].weight << endl;
    }

    cout << "\nTotal weight of MST = " << totalWeight << endl;
}

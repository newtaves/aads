#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
   int u, v, w;
};

void bf(int V, int E, vector<Edge>& e, int s)
{
    vector<int> d(V, INT_MAX);

    d[s] = 0;    // dist of source is 0

// relax all edges V-1 times
    for(int i=1;i<=V-1;i++)
    {
        for(int j=0;j<E;j++) {
            if(d[e[j].u] != INT_MAX && d[e[j].u]+e[j].w < d[e[j].v])
                d[e[j].v] = d[e[j].u]+e[j].w;
        }
    }

    // negative cycle check
    for(int j=0;j<E;j++) {
        if(d[e[j].u] != INT_MAX && d[e[j].u]+e[j].w < d[e[j].v]) {
            cout << "Graph contains a negative weight cycle.\n";
            return;
        }
    }

    cout<<"\nShortest distances from source vertex "<<s<<":\n";
    cout<<"Vertex\tDistance\n";

    for(int i=0;i<V;i++) {
        cout<<i<<"\t";

        if(d[i]==INT_MAX)
            cout<<"INF";
        else
            cout<<d[i];

        cout<<endl;
    }
}

int main() {

    int V, E;

    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<Edge> e(E);

    cout << "Enter edges (source destination weight):\n";

    for(int i=0;i<E;i++)
        cin >> e[i].u >> e[i].v >> e[i].w;

    int s;

    cout << "Enter source vertex: ";
    cin >> s;

    bf(V, E, e, s);

    return 0;
}

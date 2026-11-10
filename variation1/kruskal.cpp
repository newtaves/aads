#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Edge {
   int a, b, w;
};

// union find
class DSU {
    vector<int> par, sz;

public:
    DSU(int n);
    int findRoot(int x);
    void merge(int a, int b);
};

DSU::DSU(int n) {
    par.resize(n);
    sz.resize(n, 1);
    for(int i=0;i<n;i++)
        par[i] = i;
}

int DSU::findRoot(int x) {
    if(par[x] != x)
        par[x] = findRoot(par[x]);
    return par[x];
}

void DSU::merge(int a, int b) {
    int ra = findRoot(a);
    int rb = findRoot(b);

    if(ra == rb)
        return;

    if(sz[ra] < sz[rb])
        swap(ra, rb);

    par[rb] = ra;
    sz[ra] += sz[rb];
}

void kruskal(int nv, vector<Edge>& e) {

    // sort edges by weight
    sort(e.begin(), e.end(), [](Edge x, Edge y) { return x.w < y.w; });

    DSU dsu(nv);

    vector<Edge> mst;
    int total = 0;

    for(auto ed : e) {

        // skip if it makes a cycle
        if(dsu.findRoot(ed.a) != dsu.findRoot(ed.b)) {
            mst.push_back(ed);
            total += ed.w;
            dsu.merge(ed.a, ed.b);
        }

        if(mst.size() == nv-1)
            break;
    }

    if(mst.size() != nv-1) {
        cout << "Minimum Spanning Tree does not exist.\n";
        return;
    }

    cout<<"\nEdges in the Minimum Spanning Tree:\n";

    for(auto ed : mst)
        cout << ed.a << " - " << ed.b << " : " << ed.w << endl;

    cout<<"\nTotal weight of MST = "<<total<<endl;
}

int main() {

    int nv, ne;

    cout << "Enter number of vertices and edges: ";
    cin >> nv >> ne;

    vector<Edge> e(ne);

    cout << "Enter edges (source destination weight):\n";

    for(int i=0;i<ne;i++)
        cin >> e[i].a >> e[i].b >> e[i].w;

    kruskal(nv, e);

    return 0;
}

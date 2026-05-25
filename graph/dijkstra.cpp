// Dijkstra's Shortest Path — O(V^2) adjacency-list implementation
// Input: start_vertex  n_vertices  n_edges
//        then n_edges lines: src dst weight
// Output: shortest path + cost from start to every vertex

#include <iostream>
#include <climits>
using namespace std;

struct Edge {
    Edge *next;
    int to, weight;
};

int main(){
    int start, n, m;
    cin >> start >> n >> m;

    int *dist   = new int[n];
    int *parent = new int[n];
    bool *settled = new bool[n];
    Edge **graph  = new Edge*[n];
    int *stack    = new int[n];

    for(int i = 0; i < n; i++){
        dist[i]     = INT_MAX;
        parent[i]   = -1;
        settled[i]  = false;
        graph[i]    = nullptr;
    }

    for(int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        Edge *e = new Edge;
        e->to     = y;
        e->weight = w;
        e->next   = graph[x];
        graph[x]  = e;
    }

    dist[start] = 0;

    for(int iter = 0; iter < n; iter++){
        // find unsettled vertex with minimum distance
        int u = -1;
        for(int j = 0; j < n; j++){
            if(!settled[j] && dist[j] != INT_MAX){
                if(u == -1 || dist[j] < dist[u]) u = j;
            }
        }
        if(u == -1) break; // remaining vertices unreachable

        settled[u] = true;

        // relax neighbours
        for(Edge *e = graph[u]; e; e = e->next){
            if(!settled[e->to] && dist[u] + e->weight < dist[e->to]){
                dist[e->to]   = dist[u] + e->weight;
                parent[e->to] = u;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << i << ": path -> ";
        if(dist[i] == INT_MAX){
            cout << "unreachable\n";
            continue;
        }
        int top = 0;
        for(int j = i; j != -1; j = parent[j]) stack[top++] = j;
        while(top) cout << stack[--top] << " ";
        cout << "| cost: " << dist[i] << "\n";
    }

    delete [] dist;
    delete [] parent;
    delete [] settled;
    delete [] stack;
    for(int i = 0; i < n; i++){
        Edge *e = graph[i];
        while(e){ Edge *tmp = e; e = e->next; delete tmp; }
    }
    delete [] graph;
    return 0;
}

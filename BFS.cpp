#include <bits/stdc++.h >
using namespace std;
int status [100];

void bfs (vector<int> graph[], int n){
    queue <int> q;
    if (status[n] == 0)
        q.push(n);
    status[n] = 1;
    while (! q.empty()){
        int p = q.front();
        cout <<p<<" ";
        q.pop();
        for (int i = 0; i < graph[p]. size (); i ++){
            if (status[graph[p].at(i)] == 0){
                q.push(graph[p].at(i));
                status[graph[p].at(i)] = 1;
            }
        }
    }
}

int main (){
    int node, edge,  y, x;
    cin >>node >>edge;
    vector <int> graph[node];
    memset(status, 0, sizeof(status));

    for (int i = 0; i < edge; i ++){
        cin >> x>>y;
        graph[x].push_back (y);
        graph[y].push_back (x);
    }

    bfs (graph, 2);
    return 0;
}

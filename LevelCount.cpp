#include <bits/stdc++.h>
using namespace std;
int status [100];
int level [100];

void bfs (vector <int> graph[], int n){
    queue <int> q;
    q.push(n);
    status[n] = 1;
    int p;
    while (! q.empty()){
        p = q.front();
        q.pop();
        for (int i = 0; i < graph[p].size(); i ++){
            if (status[graph[p].at(i)] == 0){
                level [graph[p].at(i)] = level [p] + 1;
                q.push(graph[p].at(i));
                status[graph[p].at(i)] = 1;

            }
        }
    }
    cout<<level[p]<<endl;
}

int main (){
    int node, edge, x,y, level = 0;
    cin>>node >> edge;
    vector < int > graph[node];

    for (int i = 0; i < edge; i ++){
        cin >>x >>y;
        graph[x].push_back (y);
        graph[y].push_back (x);
    }

    bfs (graph, 0);
    return 0;
}

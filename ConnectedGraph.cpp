#include <bits/stdc++.h>
using namespace std;
#define unseen 0
#define visited 1;
#define N 100

int status[100];

void dfs (vector<int> graph[N], int n){
    status[n] = visited;

    for (int i = 0 ; i < graph[n].size(); i ++){
        if (status[graph[n].at(i)] == unseen)
            dfs (graph, graph[n].at(i));
    }
}

int main (){
    int node, edge, x, y;
    cin>>node >>edge;
    vector <int> graph[N];
    int totalConnected = 0;

    for (int i = 0 ; i < edge; i ++){
        cin >> x>>y;
        graph[x].push_back (y);
        graph[y].push_back(x);
    }

    for (int i = 0; i < node ; i ++){
        if ( status[i] == unseen){
            dfs (graph, i);
            totalConnected ++;
        }
    }


    cout <<endl<<endl<<totalConnected<<endl;

    return 0;
}

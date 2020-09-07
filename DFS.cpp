#include <bits/stdc++.h>
using namespace std;
#define N 100

int status[N];

void DFS (vector<int> graph[], int n){
    cout<<n<<" ";
    status[n] = 1;
    for (int i = 0; i < graph[n].size(); i ++){
        if (status[graph[n].at(i)] == 0 ){
            DFS (graph, graph[n].at(i));
        }
    }
}

void display (vector <int> graph[], int n){
    for (int i = 0; i < n; i ++ ){
        cout <<i<<" --- ";
        for (int j = 0; j < graph[i].size(); j ++)
            cout<<graph[i].at(j)<<" ";
        cout<<"\n";
    }
}

int main (){
    vector <int> graph[N];
    int x, y, node, edge;
    cin >>node;
    edge = node * (node - 1) / 2;

    for (int i = 0; i < edge ; i ++){
        cout <<"Create edge between (Press -1 -1 to exit):- ";
        cin >>x >> y;
        if ( (x >= N || y >= N) && (x < 0 || y < 0) ) {
            cout <<"Invalid Position try Again \n" ;
            i --;
        }
        else if ( x == -1 && y == -1 ) break;
        else {
            graph[x].push_back (y);
            graph[y].push_back (x);
        }
    }

    display(graph, node);
    DFS (graph, 2);

    return 0;
}

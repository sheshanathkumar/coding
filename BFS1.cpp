#include <bits/stdc++.h>
#define max 100
#define initial 1
#define waiting 2
#define visited 3

using namespace std;
int n;
int adj[max][max];
int state[max];
queue<int> q;

void createGraph();
void BFT();
void BFS(int v);

void BFT(){
    int v;
    for(int i=0; i<n; i++) state[i] = initial;
    cout<<"Enter the starting vertex:-  ";
    cin>>v;
    BFS(v);
    for(v=0; v<n; v++){
        if(state[v] == initial)
            BFS(v);
    }
}

void BFS(int v){
    q.push(v);
    state[v] = waiting;
    while(!q.empty()){
        v = q.front();
        q.pop();
        state[v] = visited;
        cout<<v<<" ";
        for(int i=0; i<n; i++){
            if(adj[v][i] == 1 && state[i] == initial){
                q.push(i);
                state[i] = waiting;
                cout<<"---Tree Edge ("<<v<<","<<i<<")\n";
            }
        }
    }
}

void createGraph(){
    int origin, destine, maxEdge;
    cout<<"Enter number of vertex:-  ";
    cin>>n;
    maxEdge = (n * (n-1));
    for(int i=0; i<maxEdge; i++){
        cout<<"(Press -1 -1 to quit)Enter edge between:- ";
        cin>>origin>>destine;
        if(origin == -1 && destine == -1) break;
        else if(origin >= n || destine >= n || origin <0 || destine <0){
            cout<<"Invalid Location \n";
            i--;
        }
        else adj[origin][destine] = 1;
    }
}

int main(){
    createGraph();
    BFT();
    return 0;
}

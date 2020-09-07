#include <bits/stdc++.h>
#define nil -1
#define initial 1
#define waiting 2
#define visited 3
#define max 100
#define infinity 9999
using namespace std;

int adj[max][max];
int state[max];
int predecessor[max];
int dist[max];
int path[max];
int n;
queue <int> q;

void createGraph();
void BFT();
void BFS(int v);

void BFT(){
    int v;
    for(int v = 0; v<n; v++){
        state[v] = initial;
        predecessor[v] = nil;
        dist[v] = infinity;
    }
    cout<<"Enter starting Vertex:-  ";
    cin>>v;
    BFS(v);
    cout<<"\n";
}

void BFS(int v){
    q.push(v);
    state[v] = waiting;
    predecessor[v]= nil;
    dist[v] = 0;
    while(!q.empty()){
        v = q.front();
        q.pop();
        state[v] = visited;
        for(int i=0; i<n; i++){
            if(adj[v][i] == 1 && state[i] == initial){
                q.push(i);
                state[i] = waiting;
                predecessor[i] = v;
                dist[i] = dist[v] + 1;
            }
        }
    }
}

void createGraph(){
    int origin, destin, maxEdge;
    cout<<"Enter no. of vertices:= ";
    cin>>n;
    maxEdge = n*(n-1);
    for(int i=0; i<maxEdge; i++){
        cout<<"(Press -1 -1 to Quit) Create Edge between:-  ";
        cin>>origin>>destin;
        if(origin == -1 && destin == -1) break;
        else if (origin >= n || destin >= n || origin <0 || destin <0){
            cout<<"Invalid Location try again:-  ";
            i--;
        }
        else adj[origin][destin] = 1;
    }
}

int main(){
    createGraph();
    BFT();
    int v, count, u;
    cout<<"Enter destination Vertex:-  ";
    cin>>v;
    while(1){
        if(v >= n || v < -1){
            cout<<"Invalid Location Try Again\n ";
        }
        else if(v == -1) break;
        count = 0;
        while (v!= nil){
            path[count++] = v;
            u = predecessor[v];
            v = u;
        }
    }
    for(int i = count-1; i>=0; i--)
        cout<<path[i]<<"->";
    return 0;
}

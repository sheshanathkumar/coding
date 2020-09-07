#include <bits/stdc++.h>
#define infinity 9999
#define max 100
#define waiting 1
#define confirm 2
#define nil -1
using namespace std;

int s,n;
int adj[max][max];
int status[max];
int predecessor[max];
int pathLength[max];

void createGraph();
void dijkstra (int s);
int minTemp();
void findPath(int s, int v);

void dijkstra(int s){
    int current;
    for(int i=0; i<n; i++){
        predecessor[i] = nil;
        pathLength[i] = infinity;
        status[i]= waiting;
    }
    pathLength[s] = 0;
    while (1){
        current = minTemp();
        if (current = nil) return;
        status[current] = confirm;
        for(int i =0; i<n; i++){
            cout<<i<<" "<<pathLength[i]<<endl;
            if(adj[current][i] != 0 && status[i] == waiting){
                if(pathLength[current] + adj[current][i] < pathLength[i]){
                    predecessor[i] = current;
                    pathLength[i] = pathLength[current] + adj[current][i];
                }
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<pathLength[i]<<" "<<endl;
    for(int i=0; i<n; i++)
        cout<<predecessor[i]<<" "<<endl;
}

int minTemp(){
    int k = nil, min = infinity;
    for(int i=0; i<n; i++){
        if(status[i] = waiting && pathLength[i] < min){
            min = pathLength[i];
            k = i;
        }
    }
    return k;
}

void findPath(int s, int v){
    int shortDistance = 0, count =0, path[max],u;
    while(v != s){
        path[count++] = v;
        u = predecessor[v];
        shortDistance += adj[u][v];
        v = u;
    }
    path[count] = s;
    cout<<"Minimum distance from "<<s<<" to "<<v<<" "<<shortDistance<<endl;
    for(int i=count; i>=0; i++) cout<<path[i]<<" "<<endl;
}

void createGraph(){
    int origin, destine, maxEdge, wt;
    cout<<"Enter number of Vertex:-  ";
    cin>>n;
    maxEdge = n*(n-1);
    for(int i=0; i<maxEdge; i++){
        cout<<"(Press -1 -1 -1 to Quit) Enter Origine, Destine and Weigth value :-  ";
        cin>>origin>>destine>> wt;
        if(origin == -1 && destine == -1) break;
        else if(origin >= n || destine >= n || origin <-1 || origin <-1){
            cout<<"Invalid Location try again\n";
            i--;
        }
        else adj[origin][destine] =wt;
    }
}

int main(){
    int v;
    createGraph();
    cout<<"Enter source vertex:- ";
    cin>>s;
    dijkstra(s);
   /* while (1){
        cout<<"Enter destination vertex(Press -1 to quit):-  ";
        cin>>v;
        if(v == -1) break;
        else if (v >=n || v<-1)  cout<<"Invalid Vertex\n";
        else if (v == s) cout<<"Same Vertex diatance 0\n";
        else if (pathLength[v] == infinity) cout<<"Vertex are not connected\n";
        else    findPath(s,v);
    }*/
    return 0;
}

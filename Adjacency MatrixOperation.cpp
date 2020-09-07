#include <bits/stdc++.h>
#define max 100
using namespace std;
int adj[max][max];
int n;

void createGraph();
void show();
void insertEdge(int origine, int destine);
void deleteEdge(int origine, int destine);

//------------Create Graph-------------//
void createGraph(){
    int origine, destine, maxEdge;
    cout<<"Enter the number of vertex:-  ";
    cin>>n;
    maxEdge= (n*(n-1));
    for(int i=0; i<maxEdge; i++){
        cout<<"Enter Edge"<<i+1<<" (-1 -1 for quit):- ";
        cin>>origine>>destine;
        if(origine == -1 && destine == -1) break;
        else if(origine <0 || origine >=n || destine<0 || destine>=n){
            cout<<"Invalid Value: ";
            i--;
        }
        else {
            adj[origine][destine] = 1;
        }
    }
}

void show(){
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }
}

void insertEdge(int origine, int destine){
    if(origine == -1 && destine == -1) return;
        else if(origine <0 || origine >=n || destine<0 || destine>=n){
            return;
        }
        else {
            adj[origine][destine] = 1;
        }
}

int main(){
    int choice, origine, destine;
    createGraph();
    while(1){
    cout<<"Enter\n1-Insert Egde\n2-Show Graph\n3-Exit:-  ";
    cin>>choice;
    switch(choice){
    case 1:
        cout<<"Enter an edge to insert: ";
        cin>>origine>> destine;
        insertEdge(origine, destine);
        break;
    case 2:
        show();
        break;
    case 3:
        exit (0);
    }
    }
    return 0;
}

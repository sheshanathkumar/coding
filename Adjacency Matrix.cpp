#include<bits/stdc++.h>
#define max 100
using namespace std;
int n;
int adj[max][max]={0};

int main()
{
    int origin, destin, maxEdge, graphType;
    cout<<"Enter Number of Vertices:-  ";
    cin>> n;
    cout<<"Enter type of graph\n1-Directed\n2-Undirected:- ";
    cin>>graphType;
    if(graphType == 1)
        maxEdge = (n*(n-1));
    else maxEdge = (n*(n-1)) / 2;
    for(int i = 0; i<maxEdge; i++){
        cout<<"Enter the value of Oringin and Destine (Press -1 -1 for Exit):- ";
        cin>>origin >> destin;
        if(origin == -1 && destin == -1) break;
        else if (origin <0 || destin <0 || origin >n || destin>n){
            cout<<"Invalid Location Try Again:-  \n";
            i--;
        }
        else{
            adj[origin][destin]=1;
            if(graphType == 2)
                adj[destin][origin] = 1;
        }
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}

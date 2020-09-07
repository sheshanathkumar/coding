#include <bits/stdc++.h>
using namespace std;

vector <int> v[100];
int status[100];

void findCycle (int s){
    if (status[s] == 1) {
        cout<<1;
        exit (0);
    }
    else status[s] = 1;
    for (int i = 0; i < v[s].size(); i ++)
        findCycle(v[s][i]);
}

int main (){
    int node, edge, x, y;
    cout <<"Enter no. of nodes:- ";
    cin>>node;
    edge = node * (node - 1) / 2;
    for (int i = 0; i < edge; i ++){
        cout<<"Create node between (-1 -1 for exit):- ";
        cin>>x >>y;
        if (x == -1 || y == -1) break;
        else if ( x >= node || y >= node || x < 0 || y < 0){
            cout<<"invalid location___";
            i --;
        }
        v[x].push_back(y);
    }

    for(int i = 0; i < node; i ++){
        cout<<i <<" : ";
        for (int j = 0; j < v[i].size(); j ++)
            cout<<v[i][j]<<" ";
        cout<<"\n";
    }
    findCycle(0);
    return 0;
}

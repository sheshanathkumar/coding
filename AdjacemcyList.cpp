#include <bits/stdc++.h >
using namespace std;

vector <int> v[100];

int main (){
    int x, y, node, edge;
    cout<<"Enter no of Node:- ";
    cin>>node;
    int n = node * (node -1) /2;
    cout<<"Enter no of edge not more than "<<n<<" :- ";
    cin>>edge;
    for (int i = 1; i <= edge; i ++){
        cout<<"Enter edge between:- ";
        cin>>x>>y;
        if (x < 0 || x >= node || y < 0 || y >= node) {
            cout<<"Invalid Postition ";
            i --;
        }
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 0; i < node; i++){
        cout<<"Adjacency List of "<<i<<" :---> ";
        for (int j = 0; j < v[i].size() ; j++)
            cout<<v[i][j]<< " ";
        cout<<"\n";
    }



    return 0;
}

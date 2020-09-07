#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin>>t;
    while (t --){
      int e; cin>>e;
      int x, y;
      vector<int>graph[10000];
      int status [10000] = {0};

      for (int i = 0; i < e; i ++){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        status[x] = 1, status[y] = 1;
      }
        int count = 0;
        for (int i = 0; i < 10000; i ++){
        if (status[i] == 1) count ++;
        }
        cout <<count<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
#define  s(x) scanf("%d",&x)
using namespace std;

int main(){
    int  size, group, index = 0, min = INT_MAX;
    s(size);
    s(group);
    int a[size];
    for( int j = 0; j<size; j++) cin>>a[j];
    for(int i=0; i<size-group+1; i++){
        if(min > (a[i] + a[i+1] + a[i+2]) / group ){
            min = (a[i] + a[i+1] + a[i+2]) / group;
            index = i;
        }
   }
    cout << index << "  "<<index+group-1;
    return 0;
}

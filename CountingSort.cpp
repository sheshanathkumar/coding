#include <bits/stdc++.h>
using namespace std;

int main (){
    int arr[] = { 3,2,4,4,3,1,2,5,0,1};
    int size = sizeof(arr) / sizeof(int) ;
    //int max = arr[0];
   /* for ( int i = 1; i < size; i++)
        if ( max < arr[i]) max = arr[i];
    int hash[max];
    memset(hash, 0, sizeof(hash) ); */
    int hash[6] = {0};
    for ( int i = 0; i < size; i++) hash [arr[i] ] ++;

    for ( int i = 0; i < 6; i++) cout<<hash[i]<<" ";
    cout<<"\n";
    for (int i = 1; i < 6; i++) hash [i] = hash[i] + hash[i - 1];

    for ( int i = 0; i < 6; i++) cout<<hash[i]<<" ";
    cout<<"\n";

    int b[size];
    for ( int i =0; i < size; i++){
       b [hash[arr[i] ]] = arr[i];
       hash[arr[i] ] --;
    }
    for ( int i = 0; i < size; i++) cout<<b[i]<<" ";
    return 0;
}

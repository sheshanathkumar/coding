#include <bits/stdc++.h>
using namespace std;
int partitionPos(int arr[], int lb, int ub, int i);
int partitions ( int arr[], int lb, int ub);


int partitionPos(int arr[], int lb, int ub, int i){
    if ( lb == ub) return arr[lb];
    int s = partitions(arr, lb, ub);
    int ap = s - lb + 1;
    if ( ap == i) return arr[s];
    else if (ap > i) partitionPos ( arr, lb, s - 1, i);
    else partitionPos (arr, s+1, ub, i - ap);
}

int partitions ( int arr[], int lb, int ub){
    int pivot = arr[ub];
    int i = lb - 1, j;
    for ( j = lb; j < ub; j++){
        if (arr[j] <= pivot){
            i++;
            swap (arr[i], arr[j]);
        }
    }
    swap (arr[i+1], arr[ub]);
    return i + 1;
}

int main (){
    int arr[10] = { 2,6,4,3,7,8,1,9,5,0};
    int size = 10;
    int i ; cin>>i;
    cout<<i<<"th Smaller number in 2,6,4,3,7,8,1,9,5,0 is:- ";
    int val = partitionPos( arr, 0, 9, i);
    cout<<arr[val];
    return 0;
}

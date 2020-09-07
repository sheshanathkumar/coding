#include <bits/stdc++.h>
using namespace std;

long part( long arr[], long, long);
void randQuickSort(long arr[], long, long);
void printArray(long [], long);

int main (){
    long size;
    cin >>size;
    long arr[size];
    for ( long i = 0; i < size; i++) arr[i] = rand();
    randQuickSort(arr, 0, size-1);
    printArray(arr, size);
    return 0;
}

void randQuickSort(long arr[], long lb, long ub){
    if (lb < ub){
        long pivot = part(arr, lb, ub);
        randQuickSort(arr, lb, pivot-1);
        randQuickSort(arr, pivot+1, ub);
    }
}

long part(long arr[], long lb, long ub){
    long pivot = rand() % 10000 + 1;
    swap (pivot, arr[ub]);
    long x = lb-1;
    for ( int j = lb; j<= ub-1; j++){
        if (arr[ub] >= arr[j]){
            x++;
            swap (arr[x], arr[j]);
        }
    }
    swap (arr[x+1], arr[ub]);
    return x+1;
}

void printArray (long arr[], long size){
    for (long i = 0; i < size; i++)
        cout << arr[i] <<" ";
    cout<<"\n";
}

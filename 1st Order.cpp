#include <bits/stdc++.h>
using namespace std;

int main (){
    int arr[] = { 12, 56, 23, 46, 89, 11,  89};
    int min, max;
    int size = sizeof(arr) / sizeof(int);
    (arr[0] < arr[1]) ? max = arr[1], min = arr[0] : max = arr[0] , min = arr[1];
     if (size % 2 == 0){
        for( int i = 2; i < size; i+=2){
            if ( arr[i] > arr[i+1]){
                if (max < arr[i]) max = arr[i];
                if (min > arr[i+1]) min = arr[i + 1];
            }
            else {
                if ( max < arr[i + 1]) max = arr[i+1];
                if ( min > arr[i]) min = arr[i];
            }
        }
    }
    else {
            for( int i = 2; i < size - 1; i+=2){
            if ( arr[i] > arr[i+1]){
                if (max < arr[i]) max = arr[i];
                if (min > arr[i+1]) min = arr[i + 1];
            }
            else {
                if ( max < arr[i + 1]) max = arr[i+1];
                if ( min > arr[i]) min = arr[i];
            }
        }
        if ( max < arr[size - 1]) max = arr[size - 1];
        if ( min > arr[size - 1]) min = arr[ size - 1];
    }
    cout<<"Smallest and Largesr number are:- "<<min<<" " <<max;
}

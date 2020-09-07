#include <bits/stdc++.h>
using namespace std;

void createBinary (int arr[], int size, int i){
    int k = size - 1;
    while ( i > 0){
        arr[k] = i % 2;
        i = i / 2;
        k --;
    }
}

void printA (int arr[], int size){
    for (int i = 0; i < size; i ++) cout<<arr[i];
    cout<<"\n";
}

int main (){
    string s;
    cin>>s;
    int k = s.length();
    int arr[k];
    memset (arr, 0, sizeof(arr));
    for (int i = 0; i < pow(2 , k - 1); i ++){
        createBinary (arr, k, i);
        for (int j = 0; j < k; j ++){
            if (arr[j] == 0) cout<<s[j];
            else cout<<" "<<s[j];
        }
        cout<<"\n";
    }
    return 0;
}

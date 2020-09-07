#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while (test--){
    int num, temp=0, k=1, str[1000] = {0};
    cin>>num;
    while (temp < num)
        temp = temp + pow (2,k++);
    --k;
    int tempo = num - (pow(2, k) - 1);
    int size = k-1;
    while (tempo >0){
        str[size] = tempo % 2;
        tempo /= 2;
        size--;
    }
    for (int i = 0; i < k; i++){
        if (str[i] == 0) str[i] = 5;
        else str[i] = 6;
    }
    for (int i = 0; i < k; i++)
        cout<<str[i];
    cout<<"\n";
    }
    return 0;
}

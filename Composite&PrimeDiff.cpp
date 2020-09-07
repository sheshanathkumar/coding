#include <bits/stdc++.h>
using namespace std;

int isPrime(int num){
    if(num == 2 || num == 3) return 1;
    if(num == 1) return 0;
    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int isComposite(int num){
    if(num == 1) return 1;
     for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0) return 1;
    }
    return 0;
}

int totalDifference(int left, int right){
    int prime = 0, composite= 0;
    for(int i=left; i<=right; i++){
        if(isPrime(i)) prime++;
        else if(isComposite(i)) composite++;
    }
    return composite - prime;
}

int main(){
    int test, left, right;
    cin>>test;
    while(test--){
        cin>>left>>right;
        cout<<totalDifference(left, right);
    }
    return 0;
}

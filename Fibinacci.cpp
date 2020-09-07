#include <iostream>
using namespace std;

void fibonacci(int n){
    int fibo[n];
    fibo[0] = fibo[1] = 1;
    for(int i=2; i<n; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
    for (int i=0; i<n; i++) cout<<fibo[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}

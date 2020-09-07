#include <bits/stdc++.h>
using namespace std;
stack<int> s;

void conversion(int decimal, int base){
    if(decimal == 0) return;
    s.push(decimal %base);
    conversion (decimal/base, base);
    cout<<s.top()<<" ";
    s.pop();
}

int main(){
    int decimal, base;
    cout<<"Enter the decimal value and base value:-  ";
    cin>> decimal>>base;
    conversion (decimal, base);
    return 0;
}

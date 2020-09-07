#include <bits/stdc++.h>
using namespace std;

int main(){
    bitset <32> b1(0);
    bitset <32> b2 = b1.flip();
    cout<<b2<<endl;
    long long sum = 0;
    for (int i = 0; i < 32; i++)
         sum = sum + b2[i] * pow (2 , i);
    return 0;
}

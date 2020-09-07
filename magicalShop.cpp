#include <bits/stdc++.h>
using namespace std;

int main (){
    long potion[100000];
    int modulo, sum = 0;
    string str;
    cin>>potion[0]>>modulo>>str;
    for (int i = 1; i<str.length(); i++)
        potion[i] = (potion[i-1] % modulo * potion[i-1] % modulo) % modulo;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '1')
            sum = (sum % modulo + potion[i] % modulo ) % modulo;
    }
    printf ("%d",sum);
}

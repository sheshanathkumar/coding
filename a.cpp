#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    int h[26] = {0};
    for (int i = 0; i< s.size(); i ++) {
        h[ s [i] - 'a' ] ++;
    }
    for (int i = 0; i < 26; i ++) cout<<h[i]<<" ";
    return 0;
}

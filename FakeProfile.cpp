#include <bits/stdc++.h>
using namespace std;

int main () {
    int test; cin >>test;
    while (test --) {
        int hash[26], count = 0;
        for (int i = 0; i < 26; i ++) hash[i] = 0;
        string str; cin>>str;
        for (int i = 0; i < str.size(); i ++) {
            hash [ str[i] - 'a' ] ++ ;
        }

        if (hash[0] != 0 || hash[4] != 0 || hash[8] != 0 || hash[14] != 0 || hash[20] != 00) {
            hash[0] = 0;
            hash[4] = 0;
            hash[8] = 0;
            hash[14] = 0;
            hash[20] = 0;
        }

        for (int i = 0; i < 26; i ++) {
            cout <<hash[i]<<" ";
        }
        cout<<"\n";
        for (int i = 0; i < 26; i ++) {
            if (hash[i] != 0 ) count ++;
        }
        if (count % 2 == 1) cout<<"HE!\n";
        else cout <<"SHE!\n";
    }
    return 0;
}

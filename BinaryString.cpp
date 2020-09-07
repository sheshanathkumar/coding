#include <bits/stdc++.h>
using namespace std;

int main (){
    int test; scanf ("%d", &test);
    while (test--) {
        string str ; cin>>str;
        string abc = str;
        int count = 0;
        for (int i = 0; i < str.length(); i++) if (str[i] == '?') count++;
        char arr[count], total = pow (2, count);
        //arr[count] = {0};
        for (int i = 0; i < total; i++){
            int pos = 0;

            for ( int c = count - 1; c >= 0; c--){
                int k = i >> c;
                if ( k & 1) arr[pos++] = '1';
                else arr[pos++] = '0' ;
            }
            pos = 0;

            for (int j = 0; j < str.length(); j++){
                if ( str[j] == '?') {
                    abc[j] = arr[pos] ;
                    pos++;
                }
            }

            for (int z = 0; z < abc.length() ; z++) cout<<abc[z];
            cout<<" ";
        }
        printf ("\b");
    }
    return 0;
}

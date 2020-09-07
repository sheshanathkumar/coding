#include <bits/stdc++.h>
using namespace std;

void LPS (int lps[], string pat, int len){
    int i = 1, j = 0;
    lps[0] = 0;
    while ( i < len){
        if (pat[i] == pat[j]) {
            lps[i] = j + 1;
            i ++;
            j ++;
        }
        else {
            if ( j != 0){
                j = lps[j - 1];
            }
            else {
                lps[i] = 0;
                i ++;
            }
        }
    }
}

void KMP (string text, string pat){
    int i = 0, j = 0;
    int *lps = (int *) malloc (sizeof(pat));
    LPS ( lps, pat, pat.length());

    while ( i < text.length()){
        if ( text[i] == pat[j]) {
            i ++;
            j ++;
        }
        if ( j == pat.length()){
            cout<<pat <<" Found at "<<(i - j) + 1;
            j = lps[j - 1];
        }
        else if ( i < text.length() && text[i] != pat[j]){
            if ( j != 0) j = lps[j - 1];
            else i = i + 1;
        }
    }
    delete lps;
}

int main (){
    string text ; cin>>text;
    string pat ; cin>>pat;
    KMP (text, pat);
    return 0;
}

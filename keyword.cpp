#include <bits/stdc++.h>
using namespace std;


bool include(string input, string x){
        bool inc = false;
        string temp;
        for (int i = 0; i < x.size (); i ++){
            for (int j = 0; j < input.size (); j ++){
                if (x.at(i) == input.at(j)) temp = temp + x.at(i);
            }
        }
        if (temp == x) inc = true;
        return inc;
}

vector <string> findString (vector <string> &words){
        vector <string> exist;
        if (words.size () == 0) return exist;
        string input[] = {"qwertyuiopQWERTYUIOP", "asdfghjklLKJHGFDAS", "zxcvbnmMNBVCZX" };
        for (int i = 0; i < words.size (); i ++){
            string x = words.at(i);
            if ( include (input[0], x)) exist.push_back (x);
            else if ( include (input[1], x)) exist.push_back (x);
            else if ( include (input[2], x)) exist.push_back (x);
        }
        return exist;
}


int main (){
    int t; cin>>t;
    while ( t --){
        vector<string> words, exist;

        for (int i = 0; i < 5; i ++) {
            string x;
            cin>>x;
            words.push_back(x);
        }

        exist = findString (words);
        for (int i = 0; i < exist.size(); i ++) cout <<exist[i]<<" ";

    }
    return 0;
}

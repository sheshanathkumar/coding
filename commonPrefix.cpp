#include <bits/stdc++.h>
using namespace std;

string commonPrefix (vector <string> &str){
    if (str.size () == 0) return NULL;
    if (str.size () == 1) return str.at(0);
    string x = str.at(0), t;

    for (int i = 1; i < str.size (); i ++){
        if ( x.length () < str.at(i).length ()){
            for ( int j = 0; j < x.length (); j ++){
                if (x.at(j) == str.at(i).at(j)) t = t + str.at(i).at(j);
                else break;
            }
        }
        else {
            for (int j = 0; j < str.at (i). length (); j ++){
                if (x.at (j) == str.at(i).at(j)) t = t + x.at(j);
                else break;
            }
        }
        x = t;
        t = "\0";
    }
    return x;
}


int main (){
    vector <string> str;
    str.push_back ("aaa");
    str.push_back ("aa");
    str.push_back ("aaa");

    cout<<commonPrefix (str);


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int validString(string expr){
    stack <int> s;
    int count= 0;
    for (int i=0; i<expr.size(); i++){
        if(expr[i] == '(') s.push(expr[i]);
        else if(expr[i] == ')'){
            if(!s.empty() && s.top() == '('){
                count+=2;
                s.pop();
               }
            else s.push(expr[i]);
        }
    }
    return count;
}

int main(){
    string expr;
    cin>>expr;
    cout<<validString(expr);
    return 0;
}

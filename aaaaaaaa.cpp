#include<bits/stdc++.h>
using namespace std;

bool canRepresentBST(int pre[], int n)
{
    stack<int> s;
    int root = INT_MIN;
    for (int i=0; i<n; i++)
    {
        if (pre[i] < root)
            return false;
        while (!s.empty() && s.top()<pre[i])
        {
            root = s.top();
            s.pop();
        }
        s.push(pre[i]);
    }
    return true;
}

int main()
{
     char pre[100];
    cin >>pre;
    int l = strlen(pre);
    canRepresentBST(pre, l) ? cout<<"True\n" : cout<<"False\n";
    return 0;
}

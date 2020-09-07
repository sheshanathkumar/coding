#include <bits/stdc++.h>
using namespace std;

int main () {
	int a[100000];

	for (int i= 0; i < 100000; i ++) {
		cin>>a[i];
		if (a[i] == 42) break;
		else cout<<a[i]<<"\n";
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int countOne(int x){
	int count = 0;
	while ( x){
		x = x & (x-1);
		count ++;
	}
	return count;
}
int main(){
	int test;
	scanf ("%d", &test);
	while (test--){
		long stone;
		scanf ("%ld", &stone);
		printf ("%d\n", countOne(stone));
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main (){
	int test;
	scanf ("%d",&test);
	while (test--){
		long long num, sum=0;
		scanf ("%lld", &num);
		for (int i = 2; i < num; i*=2){
			for (int j = 1; j < i; j*=2){
				if ( i + j <= num ) sum = (sum + i + j) ;
			}
		}
		printf ("%lld", sum);
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

long gcd (long a, long b){
	if ( b == 0) return a;
	return gcd (b, a %b);
}

int main()
{
    long size;
	cin>>size;
    long arr[size];
    for (long i=0; i<size; i++) cin>>arr[i];
    long gx = arr[0], fx = 1;
    for(long i = 0; i<size; i++){
    	gx = gcd(arr[i], gx);
    	fx = fx * arr[i];
    	fx = fx % (1000000000 + 7);
    }
    long res = 1;
    for (long i=1; i<= gx; i++){
    	res = res * fx ;
    	res = res % (1000000000 + 7);
    }
    cout<<res;
    return 0;
}

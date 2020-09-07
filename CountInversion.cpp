#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, size;
	cin>>test;
	while(test--){
		cin>>size;
		int a[size];
		for (int i=0; i<size; i++) cin>>a[i];
		for(int i =0; i<size; i++){
			for(int j =i+1; j<size; j++){
				for(int k =j+1; k<size; k++){
					if( a[i] > a[j] > a[k] ){
						cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
					}
				}
			}
		}
	}
	return 0;
}
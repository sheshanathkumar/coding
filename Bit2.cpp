#include <iostream>
using namespace std;

int countOne (int x){
    int count = 0;
    while ( x){
        x = x & (x-1);
        count++;
    }
    return count;
}


int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin>>size;
        long long int a[size], totalOne[size];
        for (int i=0; i<size; i++) cin>>a[i];
        //int totalOne[size];
        for(int i=0; i<size; i++) totalOne[i] = countOne(a[i]);
        for(int i = 0; i<size-1; i++){
            for (int j = i+1; j<size; j++){
                if(totalOne[i] > totalOne[j]){
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
    }
    for(int i=0; i<size; i++) cout<<a[i]<<" ";
}
return 0;
}

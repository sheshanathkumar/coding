#include <bits/stdc++.h>
#define s(x) scanf ("%d", &x);
using namespace std;

int isPower (long x){
    return ((x != 0) && !(x & (x-1)));
}

int main (){
    int test;
    s(test);
    while (test--){
        int size, flag = 0;
        s(size);
        long arr[size], powerSet = pow(2, size) - 1, count;
        for (int i = 0; i<size; i++) s(arr[i]);
        for (count = 1; count < powerSet; count ++){
            long sum = 0;
            for (int j  =0; j < size; j++)
                if ( count & (1 << j)) sum = sum + arr[j];
        //cout<<isPower(sum)<<endl;
        if ( isPower (sum)){
            printf ("YES\n");
            flag = 1;
            break;
        }
    }
    if( flag == 0)
        printf("NO\n");
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
int test;
scanf("%d",&test);
long start,endp;
while(test--){
scanf("%ld %ld",&start, &endp);
int range=endp-start+1;
int s[range];
int init=start;
for(int i=0; i<range; i++)
    s[i]=init++;

int k=0;
for(int i=start; i<=endp; i++,k++){
    for(int p=2; p<=sqrt(i); p++){
            if(i%p==0){
                s[k]=0;
                break;
        }
    }
}

for(int i=0; i<range; i++){
        if(s[i]==1)
        continue;
        if(s[i] != 0)
        printf("%d\n",s[i]);
}
}
return 0;
}

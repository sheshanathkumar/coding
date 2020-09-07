#include <stdio.h>
#include <string.h>


char *firstNonReapet (char *s){
    char s1[2];
    int hash[256] = {0}, i;
    for(i=0; s[i] ; i++)
        hash[ s[i] ]++;
    for(i=0; s[i]; i++){

        if(hash[s[i]]== 1){
            s1[0] = s[i] ;
            s1[1] = '\0';
            return s1;
        }
    }
    return "NONE";
}

int main (){
    char s[100];
    scanf ("%s", s);
   printf("%s", firstNonReapet(s));

    return 0;
}

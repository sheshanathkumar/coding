#include <bits/stdc++.h>
using namespace std;

char *encode(char *src)
{
  char *str = new char(2 * strlen(src));
  int i = 0, k=0;
  while ( i < strlen(src)){
    int count = 1;
    str[k++] = src[i];
    while (str[k-1] == src[i+1]){
        count ++;
        i++;
    }
    str[k++] = count + '0';
    i++;
  }
  str[k] = '\0';
  return str;
}

int main (){
    char src[100] = "hello";
//    char str[100];
//    int hash[26] = {0};
//    for (int  i =0; src[i]; i++) hash[src[i] - 'a']++;
//    for (int  i =0; i < 26; i++) cout<<hash[i];
//    cout <<endl;
//    int k = 0, i= 0;
//    while (i < strlen (src)){
//        str[k++] = src[i];
//        str[k++] = hash[src[i] - 'a'] + '0';
//        i = i + hash[src[i] - 'a'];
//    }
//    str[k] = '\0';
//    cout<<str;
    char *str = encode (src);
    cout<<str;
    return 0;
}

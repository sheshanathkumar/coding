#include<stdio.h>
int main()
{
  char *x = 1;
  char *y = (char*)&x;

  printf("%c\n",*y+48);
}

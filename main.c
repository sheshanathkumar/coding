#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isOdd (int s)
{
    if (s % 2 ==1)
        return true;
    else return false;
}

int main()
{
    int s;
    scanf ("%d",&s);
    if (isOdd(s) == true)
        printf ("Yes\n");
    else printf ("NO\n");
    return 0;
}

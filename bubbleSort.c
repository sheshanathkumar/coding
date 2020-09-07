#include <stdio.h>

void swap (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort (int a[], int n) {
    int i, j;
    for (i = 0; i < n; i ++) {

        for (j = 0; j < n-i-1; j ++) {
            if (a[j] > a[j+1]) {
                swap (&a[j], &a[j+1]);
            }
        }
    }
    for (i = 0; i < n; i ++) {
        printf("%d\t",a[i] );
    }
}


int main () {
    int n = 10;
    int a[] = {-1,4,9,85,56,7,8,5,4,1};
    bubbleSort (a, n);
    return 0;
}

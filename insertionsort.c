#include <stdio.h>
#include <stdlib.h>

void insertionSort (int a[], int n) {
    int i, j, key;
    for (j = 1; j < n; j ++){
        key = a[j];
        i = j-1;
        while (i >= 0 && a[i] > key ){
            a[i+1] = a[i];
            i --;
        }
        a[i+1] = key;
    }
    for (i = 0; i < n; i ++) printf ("%d\t", a[i]);


}

int main () {
    int n = 10;
    int a[] = {-1,4,9,3,4,7,8,5,4,1};
    insertionSort (a, n);
    return 0;
}

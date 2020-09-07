#include <stdio.h>
#include <stdlib.h>

int search (int a[], int n, int key) {
    int l = 0, h = n-1;
    int pos = -1;
    while (l <= h) {
        int mid = (l + h)/2;
        if (a[mid] == key) {
            pos = mid;
            break;
        }
        else if (a[mid] > key) h = mid - 1;
        else l = mid + 1;
    }
    return pos;
}


int main () {
    int a[] = {2,4,5,7,8,9,12,23,34,56};
    int n = 10;
    int t = 10;
    while (t --){
        int k; scanf ("%d", &k);
        int pos = search (a, n, k);
        printf ("match found at %d index", pos);
    }

    return 0;
}

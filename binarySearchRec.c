#include <stdio.h>
#include <stdlib.h>

int binarySearch (int a[], int l, int h, int k) {
    if ( l > h) return -1;
    else {
        int mid = (l + h) / 2;
        if (a[mid] == k) return mid;
        else if (a[mid] > k) binarySearch(a, l, mid-1, k);
        else binarySearch(a, mid+1, h, k);
    }
}


int search (int a[], int n, int k){
    int l = 0, h = n-1;
    return binarySearch (a, l, h, k);
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

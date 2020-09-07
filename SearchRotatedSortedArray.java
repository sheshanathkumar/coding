package com.sk;

import java.util.Arrays;

public class SearchRotatedSortedArray {
	
	public static int getPivotPoint (int [] arr, int l, int h) {
		
		if ( l > h) return -1;
		if (l == h) return l;
		
		int mid = (l + h) / 2;
		
		if ( mid < h && arr[mid] > arr[mid+1] ) {
			return mid;
		} 
		if (mid > l && arr[mid] < arr[mid-1]) {
			return mid-1;
		} 
		if ( arr[l] >= arr[mid]) {
			return getPivotPoint(arr, l, mid-1);
		}
		return getPivotPoint(arr, mid+1, h);
	}
	
	public static int searchInArray (int [] arr, int t) {
		
		if (arr.length == 0) return -1; 
		if (arr.length == 1 && arr[0] != t ) return -1;
		int res = 0;
		int piv = getPivotPoint (arr, 0, arr.length-1);
		
		int [] partA = new int[piv + 1];
		int [] partB = new int[arr.length -1 - piv];
		
		for (int i = 0; i < partA.length; i ++) {
			partA[i] = arr[i];
		}
		for (int i = 0; i < partB.length; i ++) {
			partB[i] = arr[piv+1+i];
		}
		
		
		if ( (res = Arrays.binarySearch(partA, t)) >= 0) {
			return res;
		} else if ((res = Arrays.binarySearch(partB, t)) >= 0 ) {
			return piv + 1 + res;
		} else 
			return -1;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int [] arr = new int [] {4,5,6,7,0,1,2};
		int t = 18;
		System.out.println(searchInArray(arr, t));

	}

}

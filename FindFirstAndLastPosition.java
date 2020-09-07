package com.sk;

import java.util.Arrays;

public class FindFirstAndLastPosition {
	
	public static int getFirstPosition (int [] arr,int l, int h, int t) {
		
		int x = Arrays.binarySearch(arr, l, h, t);
		if ( x > -1) {
			if (x == 0) return x;
			else {
				if (arr[x] == arr[x-1]) {
					x = getFirstPosition(arr, 0, x, t);
				}
			}
		}
		
		return x;
	}
	
	public static int getLastPosition (int [] arr, int l , int h, int t) {
		
		int y = Arrays.binarySearch(arr, l, h, t);
		
		if ( y > -1) {
			if ( y == arr.length-1) return y;
			else {
				if (arr[y] == arr[y+1]) {
					y = getLastPosition(arr, y+1, arr.length, t);
				}
			}
		}
		
		
				
		return y;
	}
	
	public static int [] searchInArray (int [] arr, int t) {
		
		if (arr.length == 0) 
		if (arr.length == 1 && arr[0] == t) return new int [] {0, 0};
		if (arr.length == 1 && arr[0] != t) return new int [] {-1, -1};
		
		int x = getFirstPosition (arr, 0, arr.length, t);
		
		int y = getLastPosition (arr,0, arr.length,  t);
		
		if (x > -1 && y > -1) {
			return new int [] {x, y};
		}
		else  return new int [] {-1, -1};
		
	}
	

	public static void main(String[] args) {

		int [] arr = new int [] {4,5,5,5,5,6,6,6,7,7,7,7,9};
		int t = 9;
		int [] ans = searchInArray(arr, t);
		System.out.println(ans[0] +" "+ ans[1]);
		
	}

}

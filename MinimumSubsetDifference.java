package com.sk.dp;


/**
 * Return minimum difference form 2 subset of an array
 * @author HOME
 *incomplete
 */
public class MinimumSubsetDifference {
	
	public static int subsetMinDifference (int set[], int sum, int n) {
		int min = Integer.MAX_VALUE;
		
		for (int i = 0; i < n; i ++) {
			min = Math.min(min, sum - 2*set[i]);
		}
		
		return min;
	}
	
	public static void main (String [] args) {
		int n = 4;
		int [] set = new int [] {36, 7, 46, 40};
		
		int sum = 0;
		for (int i : set) {
			sum += i;
		}
		System.out.println(subsetMinDifference (set, sum, n) );
		
	}
}

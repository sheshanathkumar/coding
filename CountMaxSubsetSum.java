package com.sk.dp;

/**
 * Count number of subset which difference as given
 * @author HOME
 *
 */

public class CountMaxSubsetSum {
	
	public static int countMaxSubsetSumUtil (int [] arr, int sum, int n) {
		if (n == -1) return 0;
		if (sum == 0) return 1;
		return Math.max (countMaxSubsetSumUtil(arr, sum, n-1), 1 + countMaxSubsetSumUtil(arr, sum - arr[n], n-1));
	}
	
	public static int countMaxSubsetSum (int [] arr, int n, int diff) {
		
		int sum = 0;
		for (int i : arr) sum += i;
		
		if (diff > sum || diff < -sum) return 0;
		
		int getSum = ( diff + sum ) / 2;
		
		int res = countMaxSubsetSumUtil (arr, getSum, n-1);
		return res;
	}

	public static void main(String[] args) {

		int arr [] = new int[] {0,0,0,0,0,0,0,0,1};
		int n = arr.length;
		int diff = 1;
		
		System.out.println( countMaxSubsetSum (arr, n, diff) );
		
	}

}

package com.sk.dp;

/**
 * Check if any subset found for given sum
 * return True for sum == 0
 * @author HOME
 */

public class SubsetSumProblem {
	
	public static boolean ifSubsetPresent( int []set, int sum, int n) {
		
		if (n == -1 ) return false;
		if (sum == 0 ) return true;
		if ( set[n] > sum  ) {
			return ifSubsetPresent(set, sum, n-1);
		} else {
			return ( ifSubsetPresent (set, sum - set[n] , n-1) ||  ifSubsetPresent(set, sum, n-1));
		}
		
	}
	
	public static void main (String [] args) {
		int n = 5;
		int [] set = new int [] {2,3,7,8,10};
		int sum = 17;
		System.out.println(ifSubsetPresent (set, sum, n-1) );
		
	}

}

package com.sk.dp;

/**
 * Return true if there present 2 subset having equal sum
 * @author HOME
 *
 */

public class EqualSumPartition {
	
	public static boolean ifEqualSubsetPresent(int [] set, int sum, int n) {
		
		if (n == -1) return false;
		
		if (sum == 0) return true;
		
		if (set[n] > sum) 
			return ifEqualSubsetPresent(set, sum, n-1);
		else {
			return ( ifEqualSubsetPresent(set, sum - set[n], n-1)  || ifEqualSubsetPresent(set, sum, n-1) );
		}
		
	}

	public static void main(String[] args) {

		int n = 5;
		int [] set = new int [] {2,3,7,4,10};
		
		int x = 0;
		for (int p : set) {
			x += p; 
		}
		if (x % 2 != 0) System.out.println("False");
		else {
			int sum = x/2;
			System.out.println(ifEqualSubsetPresent (set, sum, n-1) );
		}
	}

}

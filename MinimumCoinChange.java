package com.sk.dp;

/**
 * Get minimum number of coin to get the sum
 * @author HOME
 */
public class MinimumCoinChange {

	public static int getMinCoin (int coin [], int sum, int n) {
		
		if (sum == 0 || n == -1) {
			return 0;
		}
		
		if (coin[n] > sum)
			return getMinCoin(coin, sum, n-1);
		else {
			return Math.max( 1 + getMinCoin(coin, sum - coin[n], n-1)  , getMinCoin(coin, sum, n-1));
		}
		
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n = 4;
		int [] coin = new int[] {9,5,6,1};
		int sum = 16;
		System.out.println(getMinCoin (coin, sum, n-1) );

	}

}

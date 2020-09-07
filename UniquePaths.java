package com.sk;

import java.util.Arrays;

public class UniquePaths {
	
//	public static int getRoute (int [][] grid, int x, int y, int m, int n) {
//		
//		if (x < 0 || y < 0) return 0;
//		if (x > m || y > n ) return 0;
//		
//	//	for (int i = 0; i < )
//		
//	}
	
	public static int uniquePaths (int m, int n) {
		
		int [][] dp = new int [m][n];
		
		for (int i = 0; i < m; i ++) {
			Arrays.fill(dp[i], 1);
		}
		
		for (int i = 1; i < m; i ++) {
			for (int j = 1; j < n; j ++) {
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
		return dp[m-1][n-1];
		
	}

	public static void main(String[] args) {

		int m = 7;
		int n = 3;
		
		System.out.println(uniquePaths (m, n));
		
	}

}

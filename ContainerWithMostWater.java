package com.sk;

import java.util.Arrays;

public class ContainerWithMostWater {
	
	public static int getMaxVolumn (int[] height) {
		
		if (height.length < 2) return 0;
		int [] resHeight = new int[height.length];
		
		for (int i = 1; i < resHeight.length; i ++) {
			
			for (int j = 0; j < i; j ++) {
				
				int minVal = Math.min(height[i] , height[j] ) ; 
				int currVal = minVal * (i - j);
				resHeight[i] = Math.max(resHeight[i], currVal);
			}
				
		}
			
		Arrays.sort(resHeight);
		return resHeight[resHeight.length-1];
	}

	public static void main(String[] args) {
		int [] h = new int [] {1,8,6,2,5,4,8,3,7};
		//int s = h.length;
		
		int value = getMaxVolumn (h);
		System.out.println(value);
		
	}

}

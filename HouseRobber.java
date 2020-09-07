package com.sk;

import java.util.Arrays;
import java.util.Collections;

public class HouseRobber {
	
	public static int rob (int[] house) {
		
		if (house.length == 0) return 0;
		if (house.length == 1) return house[0];
		if (house.length == 2) return Math.max(house[0], house[1]);
		
		int [] resArr = new int [house.length] ; 
		Arrays.fill(resArr, Integer.MIN_VALUE);
		
		for (int i = 0; i <= house.length-2; i ++) {
			
			resArr[i] = Math.max(house[i], resArr[i]);
			
			for (int j = i+2; j < house.length; j ++) {
				resArr [j] = Math.max(resArr[j], resArr[i] + house[j]); 
			}
			
		}
		
		int max = 0;
		for (int i : resArr) {
			System.out.print(i+" ");
			max = Math.max(max, i);
		}
		
		return max;
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int house [] = new int [] {2,7,9,3,1};
		System.out.println(rob (house));
	}

}

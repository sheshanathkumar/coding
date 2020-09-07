package com.sk;

import java.util.Arrays;

public class SumClosest3 {
	
	public static int get3SumCloset (int[] nums, int target) {
	
		int min = Integer.MAX_VALUE;
		Arrays.sort(nums);
		for (int i = 0; i < nums.length && min != 0; i ++) {
			int l = i+1;
			int h = nums.length-1;
			
			while (l < h) {
				
				int sum = nums[i] + nums[l] + nums[h];
				 if (Math.abs(target - sum) < Math.abs(min))
		                min = target - sum;
				
				if (sum < target) 
					l ++;
				else 
					h --;
			}
			
		}
		
		return target- min;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int [] h = new int [] {-1,2,1,-4};
		int t = 1;
		int value = get3SumCloset (h, t);
		System.out.println(value);

	}

}

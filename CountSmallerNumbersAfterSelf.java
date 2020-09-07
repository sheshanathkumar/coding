package com.sk;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class CountSmallerNumbersAfterSelf {
	
	public static List<Integer> getList (int [] nums) {
		
		List<Integer> list = new ArrayList<Integer>();
		int [] res = new int [nums.length] ;
		Arrays.fill(res, 0);
		Collections.fill(list, 0);
		
		for (int i = 0; i < nums.length-1; i ++) {
			int cnt = 0;
			for (int j = i+1; j < nums.length; j ++) {
				
				if (nums [i] > nums[j] ) {
					cnt ++;
					res[i] = Math.max(res[i], cnt);
				}
				
			}
		}
		
		for (int i : res) {
			list.add(i);
		}
		
		return list;
	}

	public static void main(String[] args) {

		int [] nums = new int [] {5,2,6,1} ;
		
		System.out.println(getList (nums));
		
	}

}

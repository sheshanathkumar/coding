package com.sk.dp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class HK {
	
	public static long calculateTotalRegion(List<Integer> heights) {
	    // Write your code here

	        if (heights.size() == 0) return 0;
	        if (heights.size() == 1) return 1;

	        int res = 0;
	        for (int i = 0; i < heights.size(); i ++) {
	            int cnt = 1;
	            
	            for (int j = i+1; j < heights.size(); j ++) {
	                
	                if ( heights.get(i) >= heights.get(j) ) cnt += 1;
	                if ( heights.get(i) < heights.get(j)) break;

	            }

	            for (int j = i-1; j >= 0; j --) {
	                if ( heights.get(i) >= heights.get(j) ) cnt += 1;
	                if ( heights.get(i) < heights.get(j)) break;
	            }
	            res = res + cnt;
	        }
	        return res;
	    }
	
	
	public static void main (String [] args) {
		Integer [] arr = new Integer [] {1,1,1,1};
	
		List<Integer> list = new ArrayList<Integer>( Arrays.asList(arr) ) ;
		
		System.out.println(calculateTotalRegion (list));
	}
}

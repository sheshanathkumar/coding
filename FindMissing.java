package com.sk;

import java.util.HashSet;
import java.util.Set;

public class FindMissing {
	
	public static int getMinm (int [] arr) {
		
		Set<Integer> set = new HashSet<Integer>();
		for (int i : arr)
			if ( i > 0)
				set.add(i);
		
		for (int i = 1; i < Integer.MAX_VALUE; i++) {
			if ( ! set.contains(i) ) {
				return i;
			}
		}
		return Integer.MAX_VALUE;
	}
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int arr[] = new int [] {1,2,3,6};
		System.out.println(getMinm (arr));

	}

}

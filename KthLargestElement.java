package com.sk;

public class KthLargestElement {
	
	public static int partition (int [] arr, int l, int h) {
		
		int i = l;
		int piv = arr[h];
		
		for (int j = l; j < h; j ++) {
			
			if (arr[j] > piv) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
				
				i ++;
			}
		}
		
		int t = arr[i];
		arr[i] = arr[h];
		arr[h] = t;
		return i;
	}
	
	
	public static int getKthLargerstValue (int [] nums, int l, int h, int k) {
		
		if ( k > 0 && k <= h - l + 1 ) {
			
			int q = partition (nums, l, h);
			//System.out.println(q);
			if ( q - l == k - 1) {
				return nums[q];
			} else if (q - l > k - 1) {
				return getKthLargerstValue(nums, l, q-1, k);
			} else return getKthLargerstValue(nums, q+1, h, k - q+l - 1);
		}
		return -1;
	}
	
	public static int getKthLargest (int [] nums, int k) {
		
		return getKthLargerstValue (nums, 0, nums.length - 1, k);
		
	}

	public static void main(String[] args) {
		
		int [] nums = new int [] {3,2,1,5,6,4};
		int k = 2;
		
		System.out.println(getKthLargest (nums, k));
		

	}

}

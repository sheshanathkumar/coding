package com.sk;

public class ConvertSortedArrayBST {
	
	public static TreeNode buildTree (int [] nums, int l, int h) {
		
		if ( l > h ) return null;
		
		int mid = (l + h ) / 2;
		TreeNode node = new TreeNode(nums[mid], null, null);
		node.left = buildTree(nums, l, mid-1);
		node.right = buildTree(nums, mid+1, h);
		
		return node;
	}
	
	public static TreeNode sortedArrayToBST (int [] nums) {
		
		if (nums.length == 0) return null;
		
		int n = nums.length;
		TreeNode t = buildTree (nums, 0, n-1);
		return t;
		
	}
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int [] nums = new int [] {-10,-3,0,5,9};
		TreeNode node = sortedArrayToBST (nums);
		node.inorder(node);
		
	}

}

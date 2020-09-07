package com.sk;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

public class TreeOperation {
	
	public static List<List<Integer>> levelOrderTraversal (TreeNode node) {
		
		if (node == null) return null;
		
		List<List<Integer>> nodeList = new ArrayList<List<Integer>>();
		
		Queue<TreeNode> q = new LinkedList<TreeNode>();
		
		q.add(node);
		q.add(null);
		
		List<Integer> list  = new ArrayList<Integer>();
 		while ( !q.isEmpty()) {

 			TreeNode t = q.poll();
			
			if (t == null ){
				if ( !q.isEmpty()) {
					q.add(null);
					list.add(null);
				}
			} else {
				
				if(t.left != null) q.add(t.left);
				if(t.right != null) q.add(t.right);
				list.add(t.val);
			}
			
		}
 		
		List<Integer> newsL = new ArrayList<Integer>();
 		for (int i = 0; i < list.size(); i ++) {
 			
 			if (list.get(i) == null) {
 				nodeList.add(new ArrayList<Integer>(newsL));
 				newsL.clear();
 				
 			} else {
 				newsL.add(list.get(i));
 			}
 				
 			
 		}
 		nodeList.add(newsL);
		return nodeList;
	}
	
	public static int kthSmallestValue (TreeNode node, int k) {
		
		List<Integer> listNodes = new ArrayList<Integer>();
		
		Stack<TreeNode> st = new Stack<TreeNode>();
		
		while (true) {
			if (node != null) {
				st.push(node);
				node = node.left;
			} else {
				if (st.isEmpty() == true) break;
				TreeNode tn = st.pop();
				listNodes.add(tn.val);
				node = tn.right;
			}
		}
		return listNodes.get(k-1);
	}
	
	public static List<Integer> inorderTraversal (TreeNode node) {
		List<Integer> listNodes = new ArrayList<Integer>();
		
		Stack<TreeNode> st = new Stack<TreeNode>();
		
		while (true) {
			if (node != null) {
				st.push(node);
				node = node.left;
			} else {
				if (st.isEmpty() == true) break;
				TreeNode tn = st.pop();
				listNodes.add(tn.val);
				node = tn.right;
			}
		}
		return listNodes;
	}
	

	public static void main(String[] args) {
		
		TreeNode node = new TreeNode(60);
		node.left = new TreeNode(30);
		node.right = new TreeNode(90);
		node.left.left = new TreeNode(10);
		node.left.right = new TreeNode(45);
		node.left.right.left = new TreeNode(40);
		
		node.right.left = new TreeNode(70);
		node.right.right = new TreeNode(150);
		
		//node.inorder(node);
		//System.out.println();
		List<List<Integer>> levelOrder = levelOrderTraversal(node);
		
		for ( List<Integer> i : levelOrder) {
			System.out.println(i);
		}
		

	}

}

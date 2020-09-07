package com.sk;

public class ListNode {
	
	int val;
	ListNode next;
	
	public ListNode() {	}

	ListNode(int val) { this.val = val; }
	ListNode(int val, ListNode next) { this.val = val; this.next = next; }
	
	void display (ListNode l) {

		for (ListNode t = l ; t != null; t = t.next) {
			System.out.print(t.val+"-->");
		}
		System.out.println();
	}
}

package com.sk;

import java.util.PriorityQueue;
import java.util.Queue;

public class MergeKSortedLists {
	
	public static ListNode push (ListNode a, ListNode b) {
		
		
		if (a == null) {
			a = new ListNode();
			a = b;
		} else {
			ListNode l = a;
			while (l.next != null) {
				l = l.next;
			}
			l.next = b;
		}
		
		return a;
	}	
	
	public static ListNode mergeKLists (ListNode [] lists) {
		
		if (lists.length == 0) return null;
		ListNode l = null;
		Queue<Integer> pq = new PriorityQueue<Integer>();
		for (ListNode temp : lists) {
			for (ListNode t = temp; t != null; t = t.next) {
				pq.add(t.val);
			}
		}
		
		while ( !pq.isEmpty() ) {
			l = push(l, new ListNode(pq.poll()));
		}
		
		
		return l;
	}
	

	public static void main(String[] args) {
		ListNode obj = new ListNode();
		
		ListNode l1 = new ListNode(1);
		ListNode l2 = new ListNode(3);
		ListNode l3 = new ListNode(4);
		l1.next = l2;
		l2.next = l3;
		
		ListNode k1 = new ListNode(1);
		ListNode k2 = new ListNode(5);
		ListNode k3 = new ListNode(6);
		k1.next = k2;
		k2.next = k3;
		
		ListNode m1 = new ListNode(3);
		ListNode m2 = new ListNode(5);
		ListNode m3 = new ListNode(7);
		m1.next = m2;
		m2.next = m3;
		
		ListNode [] listArr = new ListNode [3] ;
		listArr[0] = l1;
		listArr[1] = k1;
		listArr[2] = m1;
		
		ListNode res = mergeKLists (listArr);
		
		obj.display(res);
	}

}

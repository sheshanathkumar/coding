package com.sk;

class ListNodes {
	int val;
	ListNodes next;

	ListNodes() {
	}

	ListNodes(int val) {
		this.val = val;
	}

	ListNodes(int val, ListNodes next) {
		this.val = val;
		this.next = next;
	}

	ListNodes createList() {
		ListNodes h1 = new ListNodes(1);
		ListNodes h2 = new ListNodes(2);
		ListNodes h3 = new ListNodes(3);
		ListNodes h4 = new ListNodes(4);
		h1.next = h2;
		h2.next = h3;
		h3.next = h4;
		//h4.next = h5;
		//h5.next = null;
		return h1;
	}

	void display(ListNodes h) {

		while (h != null) {
			System.out.print(h.val + "-->");
			h = h.next;
		}
		System.out.println();

	}

}

public class GfgTest {

	public static void main(String[] args) {

		ListNodes head = new ListNodes();
		ListNodes h = head.createList();
		head.display(h);

		ListNodes s = h;
		ListNodes f = h;
		
		while ( f.next != null) {
			
			if (f.next.next != null) {
				f = f.next.next;
				s = s.next;
			}else {
				f = f.next;
				s = s.next;
			}
			
		}
		System.out.println(s.val);
		
	}

}

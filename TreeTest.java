package com.sk;

import java.util.Deque;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Queue;
import java.util.Stack;
import java.util.TreeMap;

class Node {

	int data;
	Node left, right;

	Node() {
	}
	
	Node(int item) {
		data = item;
		left = right = null;
	}

	Node createTree() {
		Node n = new Node(100);
		n.left = new Node(50);
		n.right = new Node(500);
		n.left.left = new Node(25);
		n.left.right = new Node(75);
		n.right.right = new Node(800);
		n.left.left.right = new Node(35);

		return n;

	}

	void display(Node n) {
		if (n != null) {

			System.out.print(n.data + " ");
			display(n.left);
			display(n.right);

		}

	}

	int height(Node n) {
		if (n == null)
			return 0;
		return Math.max(height(n.left), height(n.right)) + 1;
	}

	void leftView(Node n) {

		if (n == null) {
			return;
		}

		Queue<Node> q = new LinkedList<Node>();

		q.add(n);

		q.add(null);

		while (q.size() > 0) {
			Node temp = q.peek();

			if (temp != null) {
				System.out.print(temp.data + " ");

				while (q.peek() != null) {

					if (temp.left != null)
						q.add(temp.left);
					if (temp.right != null)
						q.add(temp.right);

					q.remove();

					temp = q.peek();
				}
				q.add(null);

			}
			q.remove();

		}

	}

	void rightView(Node n) {

		if (n == null) {
			return;
		}

		Deque<Node> q = new LinkedList<Node>();

		q.add(n);

		q.add(null);

		while (q.size() > 0) {
			Node temp = q.peek();

			if (temp != null) {
				Deque<Node> tempDeque = new LinkedList<Node>();

				Iterator<Node> itr = q.iterator();
				while (itr.hasNext()) {
					tempDeque.add(itr.next());
				}

				tempDeque.removeLast();
				if (tempDeque.size() != 0) {
					System.out.print(tempDeque.getLast().data + " ");
				}

				while (q.peek() != null) {

					if (temp.left != null)
						q.add(temp.left);
					if (temp.right != null)
						q.add(temp.right);

					q.remove();

					temp = q.peek();
				}
				q.add(null);

			}
			q.remove();

		}

	}

	int getKey(Map<Integer, Node> m, Node p) {

		for (Entry<Integer, Node> entry : m.entrySet()) {
			if (entry.getValue() == p)
				return entry.getKey();
		}

		return 99999;
	}

	int getHorizontalDistance(Node c, Node p, Map<Integer, Node> m) {

		if (p.left == c) {
			int x = getKey(m, p);
			return x - 1;
		}

		if (p.right == c) {
			int x = getKey(m, p);
			return x + 1;
		}

		return 0;
	}

	void bottomView(Node n) {

		if (n == null)
			return;

		Map<Integer, Node> nodeMap = new HashMap<Integer, Node>();
		Queue<Node> q = new LinkedList<Node>();
		q.add(n);
		nodeMap.put(0, n);

		while (!q.isEmpty()) {
			Node t = q.peek();

			if (t.left != null) {
				q.add(t.left);
				int x = getHorizontalDistance(t.left, t, nodeMap);
				nodeMap.put(x, t.left);
			}

			if (t.right != null) {
				q.add(t.right);
				int x = getHorizontalDistance(t.right, t, nodeMap);
				nodeMap.put(x, t.right);
			}
			q.remove();

		}

		TreeMap<Integer, Node> treeMap = new TreeMap<Integer, Node>();
		treeMap.putAll(nodeMap);

		for (Entry<Integer, Node> entry : treeMap.entrySet()) {
			System.out.print(entry.getValue().data + " ");
		}

	}

	void printSpiral(Node n) {

		if (n == null)
			return;

		Stack<Node> s1 = new Stack<Node>();
		Stack<Node> s2 = new Stack<Node>();
		s1.add(n);

		while (!s1.empty() || !s2.empty()) {

			while (!s1.empty()) {
				Node t = s1.pop();
				System.out.print(t.data + " ");
				if (t.right != null)
					s2.add(t.right);
				if (t.left != null)
					s2.add(t.left);
			}
			while (!s2.empty()) {
				Node t = s2.pop();
				System.out.print(t.data + " ");
				if (t.left != null)
					s1.add(t.left);
				if (t.right != null)
					s1.add(t.right);
			}

		}

	}

	Node LCA(Node n, Node n1, Node n2) {

		if (n == null)
			return null;

		int min, max;
		min = Math.min(n1.data, n2.data);
		max = Math.max(n1.data, n2.data);
		
		Node minm = new Node(min);
		Node maxm = new Node(max);

		if (n.data >= min && n.data <= max)
			return n;
		else if (n.data < min) {
			return LCA(n.right, minm, maxm);
		} else if ((n.data > max))
			return LCA(n.left, minm, maxm);
		return null;
	}

	int countLeaves(Node n) {
		if (n == null)
			return 0;
		if (n.left == null && n.right == null)
			return 1;

		return countLeaves(n.left) + countLeaves(n.right);

	}

}

public class TreeTest {

	public static void main(String[] args) {
		Node p = new Node();
		Node n = new Node();
		p = n.createTree();
		// p.display(p);

		// left view
		// System.out.println("");
		// p.leftView(p);

		// right view
		// System.out.println("---------");
		// p.rightView(p);
		// p.bottomView(p);
		// p.printSpiral(p);

		Node n1 = new Node(75);
		Node n2 = new Node(35);
		
		 Node x = p.LCA(p, n1, n2);
		 System.out.println(x.data);
		// System.out.println(p.countLeaves(p));

	}

}

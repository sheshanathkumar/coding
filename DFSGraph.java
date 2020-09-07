package com.sk.dp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class DfsGraph {
	
	
	public static boolean detectCycleInDirectedUtill (ArrayList<ArrayList<Integer>> g, int n, int node, boolean[]vis, boolean [] rec) {
		
		if (rec[node] == true) return true;
		if (vis[node] == true) return false;
		
		vis[node] = true;
		rec[node] = true;
		
		for (int x : g.get(node)) {
			if ( detectCycleInDirectedUtill(g, n, x, vis, rec) == true) 
				return true;
		}
		rec [node] = false;
		
		return false;
	}
	
	public static boolean detectCycleInDirected (ArrayList<ArrayList<Integer>> g, int n) {
		
		if (n == 0) return false;
		boolean [] visit = new boolean [n];
		boolean [] recV = new boolean [n];
		
		for (int i = 0; i <n; i ++) {
			if (visit[i] == false) {
				if (detectCycleInDirectedUtill(g, n, i, visit, recV) == true) {
					return true;
				}
			}
		}
		return false;
		
	}
	
	
	public static boolean isCycleUtil (ArrayList<ArrayList<Integer>> g, int n, int node, boolean[]vis, int p) {
		
		vis [node] = true;
		
		for (int i : g.get(node)) {
			
			if (vis[i] == false) {
				if ( isCycleUtil(g, n, i, vis, node) == true) return true;
			} else if ( i != p ) {
				
				return true;
			}
		}
		return false;
		
	}
	
	public static boolean isCycle (ArrayList<ArrayList<Integer>> g, int n) {
		
		if (n == 0) return false;
		
		boolean cycleDetect = false;
		boolean visited [] = new boolean [n] ;
		
		for (int i = 0; i < n; i ++) {
			if (visited[i] == false) {
				cycleDetect  = isCycleUtil (g, n, i, visited, -1);
				if (cycleDetect == true) return true;
			}
		}
		return false;
		
	}
	
	
	
	public static ArrayList<Integer> dfs (ArrayList<ArrayList<Integer>> g, int n) {
		
		ArrayList<Integer> res = new ArrayList<Integer>();
		boolean [] visited = new boolean[n] ;
		
		Stack<Integer> st = new Stack<Integer>();
		st.add(0);
		
		while ( ! st.isEmpty() ) {
			
			int v = st.pop();
			
			if (visited[v] == false) {
				visited[v] = true;
				res.add(v);
				for (int i = g.get(v).size()-1; i >= 0 ; i --) {
					if (visited[ g.get(v).get(i)] == false) {
						st.push( g.get(v).get(i) );
					}
				}
			}
		}
		return res;
	}
	
	
	public static ArrayList<Integer> bfs (ArrayList<ArrayList<Integer>> g, int n) {
		
		ArrayList<Integer> res = new ArrayList<Integer>();
		boolean [] visited = new boolean [n];
		
		Queue<Integer> q = new LinkedList<Integer>();
		q.add(0);
		
		while (! q.isEmpty()) {
			
			int v = q.poll();
			res.add(v);
			visited[v] = true;
			for (int i = 0; i < g.get(v).size(); i ++) {
				
				if (visited [g.get(v).get(i)] == false) {
					visited [g.get(v).get(i)] = true;
					q.add(g.get(v).get(i));
				}
			}
		}
		return res;
	}
	

	public static void main(String[] args) {
		
		ArrayList<ArrayList<Integer>> graph = new ArrayList<ArrayList<Integer>>();
		
		ArrayList<Integer> a = new ArrayList<Integer>(Arrays.asList(3,4,6,8,13));
		ArrayList<Integer> b = new ArrayList<Integer>(Arrays.asList(4,13));
		ArrayList<Integer> c = new ArrayList<Integer>(Arrays.asList(12));
		ArrayList<Integer> d = new ArrayList<Integer>(Arrays.asList(0,5,11,13));
		ArrayList<Integer> e = new ArrayList<Integer>(Arrays.asList(0, 1, 10));
		ArrayList<Integer> f = new ArrayList<Integer>(Arrays.asList(3,7, 10, 12, 13));
		ArrayList<Integer> g = new ArrayList<Integer>(Arrays.asList(0));
		ArrayList<Integer> h = new ArrayList<Integer>(Arrays.asList(5));
		ArrayList<Integer> i = new ArrayList<Integer>(Arrays.asList(0));
		ArrayList<Integer> j = new ArrayList<Integer>(Arrays.asList(12));
		ArrayList<Integer> k = new ArrayList<Integer>(Arrays.asList(4,5, 11, 14));
		ArrayList<Integer> l = new ArrayList<Integer>(Arrays.asList(3,5, 10));
		ArrayList<Integer> m = new ArrayList<Integer>(Arrays.asList(2,9));
		ArrayList<Integer> n = new ArrayList<Integer>(Arrays.asList(0,1, 3, 5));
		ArrayList<Integer> o = new ArrayList<Integer>(Arrays.asList(10));
		
		ArrayList<Integer> aa = new ArrayList<Integer>(Arrays.asList(1));
		ArrayList<Integer>bb = new ArrayList<Integer>(Arrays.asList(0));
		ArrayList<Integer> cc = new ArrayList<Integer>(Arrays.asList(3,4));
		ArrayList<Integer> dd = new ArrayList<Integer>(Arrays.asList(2,4));
		ArrayList<Integer> ee = new ArrayList<Integer>(Arrays.asList(2,3));
		
		
		graph.add(aa);
		graph.add(bb);
		graph.add(cc);
		graph.add(dd);
		graph.add(ee);
		
		
		
		System.out.println(isCycle(graph, 5) );

	}

}

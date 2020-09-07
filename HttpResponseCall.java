package com.sk;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class HttpResponseCall {
	
	public static int dfs (List<Integer> list, Queue<Integer> q, int maxVal, boolean[] visited, int node) {
		
		ArrayList<Integer> tempArr = new ArrayList<Integer>();
		
		while (! q.isEmpty()) {
			
			int t = q.poll();
			
			if (visited[t] == false) {
				visited[t] = true;
				tempArr.add(t);
				for (int i = node; i < list.size(); i ++) {
					
					int temp = list.get(i);
					if ( visited [temp] == false  ) {
						q.add(temp);
					}
				}
				
			}
			
		}
		
		int sum = 0;
		for (int i : tempArr ) sum += i;
		
		return   (sum > maxVal) ? sum : maxVal;
	}
	
	public static int getSum  (List<List<Integer>> list, int maxVal, int size) {
		
		boolean [] visited = new boolean[size];
		
		Queue<Integer> q = new LinkedList<Integer>();
		
		for (int i = 0; i < size; i ++) {
			
			if (visited[i] == false) {
				
				int val = dfs (list.get(i), q, maxVal, visited, i);
				maxVal = (maxVal < val) ? val : maxVal;
				
			}
			
			
		}
		
		
		
		return maxVal;
	}

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while ( t -- > 0) {
			int size = Integer.parseInt(br.readLine());
			String [] str = br.readLine().split(" ");
			int maxVal = Integer.MIN_VALUE;
			int [] nodes = new int[size] ;
			
			for (int i = 0; i < size; i ++)
				nodes[i] = Integer.parseInt(str[i]);
			
			List<List<Integer>> list = new ArrayList<List<Integer>>();
			for (int i = 0; i < size; i ++) {
				List<Integer> childList = new ArrayList<Integer>();
				
				childList.add(nodes[i]);
				list.add(childList);
				
			}
			
			
			int maxValue = getSum (list, maxVal,  size);
			System.out.println(maxValue);
		}
		
	}

}

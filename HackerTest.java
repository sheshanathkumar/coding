package com.sk.dp;

import java.util.ArrayList;
import java.util.List;

public class HackerTest {
	
	public static long[] getResult (int q, int [][] mat) {
		
		List<Integer> list = new ArrayList();
		List<Integer> resList = new ArrayList();
		for (int i = 0; i < q; i ++) {
			
			switch (mat[i][0]) {
			
			case 1:
				list.add(mat[i][1]);
				break;
				
			case 2:
				int x = mat[i][1];
				list.remove(x-1);
				list.add(x-1, Integer.MAX_VALUE);
				break;
			case 3:
				int y = mat[i][1];
				int x1 = list.stream().filter(temp -> temp != Integer.MAX_VALUE).findFirst().orElse(null);
				int dist = Math.abs(x1 - y);
				resList.add(dist);
				break;
			
			}
			
			
		}
		long [] res = new long[resList.size()];
		for (int i = 0; i < resList.size(); i++) {
			Long x = (long) resList.get(i);
			res[i] = x;
		}
		
		
		return res;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int q = 6;
		int [][] mat = new int [6][2];
		mat[0][0] = 1;
		mat[1][0] = 1;
		mat[2][0] = 3;
		mat[3][0] = 2;
		mat[4][0] = 3;
		mat[5][0] = 1;
		mat[0][1] = -3;
		mat[1][1] = 4;
		mat[2][1] = 5;
		mat[3][1] = 1;
		mat[4][1] = 5;
		mat[5][1] = 11;
		
		long [] res = getResult (q, mat);

		for (long i : res) 
			System.out.println(i);
		
	}

}

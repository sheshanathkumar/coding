package com.sk;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

public class GenerateParentheses2 {
	
	public static boolean isValid (String s) {
		
		char[] cList = s.toCharArray();
		Stack<Character> st = new Stack<Character>();
		
		for (int i = 0; i< cList.length; i ++) {
			
			if ( cList[i] == '(' ) 
				st.push(cList[i]);
			else {
				if (st.empty()) {
					return false;
				} else if (!st.empty() && st.peek() == '(') {
					st.pop();
				}
			}
			
		}
		if (! st.empty()) return false;
		else return true;
		
	}
	
	public static List<String> generateParenthesis (int n) {
		
		List<String> res = new ArrayList<String>();
		
		permute (res, "", 0, 0, n);
		
		List<String> resString = new ArrayList<String>();
		for(String s : res) {
			if ( isValid(s)) {
				resString.add(s);
			}
		}
		return resString;
			
	}
		
	
	public static void permute (List<String> list , String currStr, int openB, int closeB, int max) {
		
		if (currStr.length() == 2*max) {
			list.add(currStr);
			return ;
		}
		
		if (openB < max) permute(list, currStr+"(", openB+1, closeB, max);
		if (closeB < max)permute(list, currStr+")", openB, closeB+1, max);
		
	}
		

	public static void main(String[] args) {

		int n = 3;
		List<String> t = generateParenthesis(n) ;
		System.out.println(t);
	}

}

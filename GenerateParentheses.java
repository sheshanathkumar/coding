package com.sk;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.Stack;

public class GenerateParentheses {
	
	public static boolean validParenthesis (String s) {
		
		Stack<Character> st = new Stack<Character>();
		char [] clist = s.toCharArray();
		
		for (char c : clist) {
			if (c == '(') {
				st.push(c);
			}else {
				
				if( st.empty() )
					return false;
				if (! st.empty() && st.peek() == '(') {
					 st.pop();
				}
				
			}
		}
		if (st.empty())
			return true;
		else 
			return false;
		
	}
	
	public static List<String> getAllPermutation (String x) {
		
		
		if (x.length() == 0) {
			List<String> empty = new ArrayList<String>();
			empty.add("");
			return empty;
		}
		char ch = x.charAt(0);
		
		String subStr = x.substring(1);
		
		List<String> tempList = getAllPermutation(subStr);
		
		List<String> resStringList = new ArrayList<String>();
		
		for (String val : tempList) {
			for (int i = 0; i <= val.length(); i ++) {
				String valStr = val.substring(0, i) + ch + val.substring(i);
				
				resStringList.add(valStr);
				
			}
		}
		
		
		return resStringList;
		
	}

	public static List<String> generateParenthesis (int n) {
		
		List<String> tempList = new ArrayList<String>();
		
		String x = "";
		for (int i = 0; i < n; i ++) {
			x = x + "()";
		}
		
		tempList = getAllPermutation (x);
		Set<String> sList = new HashSet<String>(tempList);
		List<String>validList = new ArrayList<String>();
		
		for (String s : sList) {
			if (validParenthesis(s)) 
				validList.add(s);
		}
		
		validList.sort( (r, s) -> r.compareTo(s) );
		System.out.println(validList);
		
		
		return validList;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int n = 3;
		List<String> t = generateParenthesis(n) ;
		System.out.println(t);
	}

}

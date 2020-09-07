package com.sk;

import java.util.ArrayList;
import java.util.List;

public class LetterCombinationsPhoneNumber {
	
	public static List<String> getLetter ( List<String> temp, String x ) {
		
		List<String> resList = new ArrayList<String>();
		
		for (String s : temp) {
			for (char c : x.toCharArray()) {
				resList.add(s+c);
			}
		}
		
		return resList;
	}
	
	
	public static List<String> getAllLetter (String num) {
		
		List<String> resList = new ArrayList<String>();
		
		if (num == null || num.trim() == "") return resList;
		
		String [] letterPttern = new String [] {
				"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" 
		};
		
		char [] inp = num.toCharArray();
		
		resList.add("");
		
		for (char ch : inp ) {
			resList = getLetter(resList, letterPttern[ch-'0']);
		}
		
		
		
		return resList;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String num = "22";
		List<String> strList = getAllLetter(num);
		System.out.println(strList);
		
	}

}

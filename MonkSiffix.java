package com.sk;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class MonkSiffix {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String [] input = br.readLine().split(" ");
		String text = input[0];
		int ind = Integer.parseInt(input[1]);
		List<String > strList = new ArrayList<String>();
		
		for (int i = 0; i < text.length(); i ++) {
			String subText = text.substring(i);
			strList.add(subText);
		}
		
		Collections.sort(strList);
		System.out.println(strList.get(ind-1));
		
		

	}

}

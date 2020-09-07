package com.sk;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class TestClass {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int size = Integer.parseInt(br.readLine());
		String arr[] = new String[size];
		int resArr[] = new int[size];
		resArr[0] = 0;

		for (int i = 0; i < arr.length; i++) {
			arr[i] = br.readLine();
		}

		for (int i = 1; i < arr.length; i++) {
			int cnt = 0;
			for (int j = 0; j < i; j++) {
				if (arr[i].compareToIgnoreCase(arr[j]) > 0) {
					cnt++;
				}
			}
			resArr[i] = cnt;
		}

		for (int i = 0; i < size; i++) {
			System.out.println(resArr[i]);
		}

	}

}

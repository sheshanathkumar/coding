package com.sk.dp;

import java.lang.annotation.*;
import java.util.*;
import java.util.Spliterator;

public class HackerEarth {
	static int val = 3;

	static int getValue() {
		return val--;
	}

	public static void main(String args[]) {
		int n;
		for (int i = 0; i < 5; i++) {
			n = getValue();
			assert n > 2;
			System.out.println(" " + n);
		}
	}
}
package com.sk;

import java.io.*;
import java.util.*;

public class GFGMN {
	
	public static void main (String[] args) throws Exception{
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    String s = br.readLine();
	    int test = Integer.parseInt(s);
	    while (test -- > 0) {
	        String[] sval = br.readLine().split(" ");
	        int [] val = new int [sval.length];
	        for (int i = 0; i < sval.length; i ++) {
	        	val[i] = Integer.parseInt(sval[i]);
	        }
	        int m = val[0];
	        int n = val[1];
	        int sum = m + n;
	        int x = sum;
	        int y = m;
	        int z = n;
	        while ( sum != 0 && n != 0) {
	        	sum = sum / 10;
	        	n = n/10;
	        }
	        if (sum == 0 && n == 0) {
	        	System.out.println(z);
	        } else {
	        	System.out.println(x);
	        }
	        
	        
	        
	    }
	}

}

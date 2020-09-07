package com.sk;

import java.io.*;
import java.util.*;

class Solution {
    public int firstUniqChar(String s) {
        // Solution goes here...
       
    	System.out.println(Integer.MIN_VALUE);
    	
    	long xx = 100l;
    	
    	Map<Character, Integer> charMap = new HashMap<Character, Integer>();
    	
    	for (char c : s.toCharArray()) {
    		
    		if (charMap.containsKey(c)) {
    			charMap.put(c, charMap.get(c) + 1);
    		} else {
    			charMap.put(c, 1);
    		}
    		
    	}
    	
    	for (int i = 0; i < s.length(); i ++) {
    		if ( charMap.get(s.charAt(i)) == 1)  {
    			return i;
    		}
    	}
        
        
        return (int)xx;
        
    }
}

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {            
            
            int ret = new Solution().firstUniqChar(line);
            
            String out = String.valueOf(ret);
            
            System.out.print(out);
        }
    }
}
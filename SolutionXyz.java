package com.sk;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * @param {string} s
 * @return {number}
 */
class SolutionXyzz {
    public int getLengthOfLongestSubstring(String s) {
        
        if (s.length() == 0) return 0;
        int n = s.length();
        
        int res = 0;
        
        for (int i = 0; i < n ; i ++) {
            boolean [] checked = new boolean [256];
            
            for (int j = i; j < n; j++) {
                if (checked[s.charAt(j) ] == true) {
                    break; 
                } else {
                    res = Math.max(res, j - i + 1); 
                    checked[s.charAt(j)] = true; 
                }
            }
            checked[s.charAt(i)] = false; 
        }
        return res; 
    }
}

public class SolutionXyz {
    
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {            
            
            int ret = new SolutionXyzz().getLengthOfLongestSubstring(line.trim());
            
            String out = String.valueOf(ret);
            
            System.out.print(out);
        }
    }
}
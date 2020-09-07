package com.sk;

public class DivideTwoIntegers {
	
	public static int divide (int dividend, int divisor) {

		long x = dividend;
		long y = divisor;
		long res = 0;
		
		boolean bothNegative = (x < 0 && y < 0) ? true : false;
		boolean oneNegative = ((x > 0 && y < 0) || (x < 0 && y > 0)) ? true : false;
		
		if (bothNegative ) {
			x = x * -1;
			y = y * -1;
		}
		
		if ( y == -1 || y == 1) {
			res = x;
			if (oneNegative)
				return ( res < 0 ) ? (int) res : (int)res * -1;
		}
		else {
			if (oneNegative) {
				if ( x < 0) x = x * -1;
				else y = y * -1;
			}
			for (long a = x; a >= y ; a = a - y ) {
				res += 1;
			}
			if (oneNegative) res = res * -1;
		}
		
		if (res > Integer.MAX_VALUE) {
			res = Integer.MAX_VALUE;
		}
		
		return (int)res;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int dividend =- 2;
		int divisor = -2;
		
		int xx = divide (dividend, divisor);
		System.out.println(xx);
	}

}

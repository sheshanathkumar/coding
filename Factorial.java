import java.util.Scanner;

class Factorial {
	public static void main (String[] argv){
	Scanner sc = new Scanner (System.in);
	long a = sc.nextInt();
	long fact = 1;
	for ( int i=1; i <= a; i++)
		fact = fact * i;
		System.out.println (fact);
	
}
}
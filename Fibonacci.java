import java.util.Scanner;

class Fibonacci{
	public static void main (String[] argv){
	System.out.println("Keep size grater than 2:- ");
	Scanner sc = new Scanner (System.in);
	int size = sc.nextInt();
	int a[] = new int [size];
	a[0] = a[1] = 1;
	for (int i = 2; i< size; i++)
		a[i] = a[i - 1] + a[i - 2];
	for (int var : a)
		System.out.println (var);
}
}

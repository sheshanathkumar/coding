import java.util.Scanner;
class swap{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.print("a = " + a+ "  and  " + " b = " + b);
        //System.out.printf("A is %d and B is %d\n", a,b);
		int temp = a;
		a = b;
		b = temp;
		System.out.print("a = " + a +" and " + " b = " + b);
        //System.out.printf("A is %d and B is %d\n", a,b);
        sc.close();
	}
}
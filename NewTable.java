import java.util.Scanner;

class NewTable{
	public static void main (String argv[]){
	Scanner sc = new Scanner (System.in);
	int a = sc.nextInt();
	System.out.print("\n");
	for (int i=1; i<=10; i++){
		System.out.print(i * a + "\n");
		}		
	}
}
import java.util.Scanner;

class PrimeGen{
	public static void main (String argv[]){
	Scanner sc = new Scanner (System.in);
	int start = sc.nextInt();
	sc = new Scanner (System.in);
	int end = sc.nextInt();
	for (int i = start; i<= end; i++){
		int flag = 0;
		for ( int k = 2; k<= i; k++){
			if (i % k ==0)
			flag++;
			}
		if(flag < 2)
		System.out.println (i);
		}
}	
}
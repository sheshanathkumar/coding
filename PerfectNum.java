import java.util.Scanner;

class PerfectNum{
  public static void main(String argv[]){
   int num, sum =0;
   Scanner sc = new Scanner(System.in);
   num = sc.nextInt();
   for (int i = 1; i < num; i++){
     if (num % i == 0){
       sum = sum + i;
	}
     }
    if( sum == num) System.out.println("Perfect");
    else System.out.println("Not Perfect");
}
}
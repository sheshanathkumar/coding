import java.util.Scanner;
class pelindrom{
  public static void main(String argv[]){
    int sum =0,r,i;
    Scanner sc = new Scanner (System.in);
    int num = sc.nextInt();
    for (i =num; i>0; i/=10){
      r = i % 10;
      sum = sum * 10 + r;
	}
    if (num == sum) System.out.println ("Pelinrdome");
    else System.out.println ("Not Pelinrdome");
}
}
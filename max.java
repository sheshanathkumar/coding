
import java.util.Scanner;
class max {
  public static void main (String argv[]){
    Scanner sc = new Scanner (System.in);
    int size = sc.nextInt();
    int a[] = new int [size];
    for (int i =0 ; i < size; i++){
       sc = new Scanner (System.in);
       a[i] = sc.nextInt();
       }
    int ini = a[0];
    for (int i =1 ; i < size; i++){
      if ( ini < a[i] )
        ini = a[i];
     }
     System.out.println("Maximum Value is:-  "+ini);
}
}
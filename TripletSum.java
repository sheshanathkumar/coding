import java.util.*;

class TripletSum{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		//int size = sc.nextInt();
		int a[] = new int[5];
		for(int i =0; i<5; i++) a[i] = sc.nextInt();
		for (int i=0; i<4; i++){
			for(int j=i+1; j<5; j++){
				if(a[i] > a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for( int var : a)
			System.out.println(var);
	}
}
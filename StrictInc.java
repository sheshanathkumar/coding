import java.util.Scanner;

class StrictInc{
	public static void main (String[] args){
		int test, size;
		Scanner sc = new Scanner (System.in);
		test = sc.nextInt();
		while (test > 0){
			size = sc.nextInt();
			int arr[] = new int [size];
			for (int i = 0; i<size; i++)
				arr[i] = sc.nextInt();
			
			int i = 0, k= 0, length = 0;
			while (i < size){
				if ( k+1 == size || arr[k] >= arr[k+1] ){
					i++;
					k=i;
				}
				else if( arr[k] < arr[k+1]){
					length ++;
					k++;
				}
			}
			System.out.println(length);
		}
		test--;
	}
}
import java.util.*;

class CountVowelScannerEx
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int count = 0;
		int length = s.length();
		for(int i=0; i<length; i++)
		{
			if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
				count++;
		}
		System.out.println(count);
		sc.close();
	}
}
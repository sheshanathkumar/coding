import java.io.*;

class CountVowelBufferedEx
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));
		String s = br.readLine();
		int count = 0;
		int length = s.length();
		for(int i=0; i<length; i++)
		{
			if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
				count++;
		}
		System.out.println(count);
	}
}
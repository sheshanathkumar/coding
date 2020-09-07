import java.io.*;

class BufferedReaderEx
{
	public static void main(String args[])throws IOException
	{
		String s;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		s =  br.readLine();
		System.out.println(s);
		char ch = (char)br.read();
		System.out.println(ch);
	}
}
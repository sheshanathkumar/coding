import java.io.*;

class DataInputStreamEx
{
	public static void main()throws IOException
	{
		DataInputStream d =new DataInputStream(System.in);
		int x, y;
		x = Integer.parseInt(d.readLine());
		y= Integer.parseInt(d.readLine());
		System.out.println(x+y);
	}
}
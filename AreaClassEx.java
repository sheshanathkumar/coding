class Ractangle
{
	private int length, breadth;
	public void getDimension(int a, int b)
	{
		length = a;
		breadth = b;
	}
	public void area()
	{
		System.out.println("Area is " + length * breadth);
	}
}

class AreaClassEx
{
	public static void main (String args[])
	{
		Ractangle A= new Ractangle();
		A.getDimension(10,30);
		A.area();
	}
}
class Complex
{
	private int real, img;
	public Complex()
	{
		real = 0;
		img =0;
	}
	public Complex (int a, int b)
	{
		real = a;
		img = b;
	}	
	/*public void getValue(int a, int b)
	{
		real = a;
		img = b;
	}*/
	public void show ()
	{
		System.out.println (real + "+" + img +"i");
	}
	public Complex sum(Complex p)
	{
		Complex temp = new Complex();
		temp.real = real + p.real;
		temp.img = img + p.img;
		return temp;
	}
}

class SumComplexEx
{
	public static void main(String args[])
	{
		Complex a = new Complex();
		Complex b = new Complex(5,7);
		Complex c = new Complex();
		/*a.getValue(3,8);
		b.getValue(5,7);*/
		c = a.sum(b);
		a.show();
		b.show();
		c.show();
	}
}
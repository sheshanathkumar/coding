class Complex
{
	private int real, img;
	public void getComplexNumber(int a, int b)
	{
		real = a;
		img = b;
	}
	public void show()
	{
		System.out.println( real + "+" + img +"i");
	}
}

class ComplexEx
{
	public static void main(String args[]){
	Complex A = new Complex();
	A.getComplexNumber(3,5);
	A.show();
	}
}
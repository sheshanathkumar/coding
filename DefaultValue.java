class Default{
	short a;
	byte b;
	int c;
	long d;
	float f;
	double g;
	char h;
	String i;
	boolean j;
	public void show()
	{
		System.out.println(a+" "+b+" "+c+" "+d+" "+f+" "+g+" "+h+" "+i+" "+j);
	} 
}

class StaticEx
{
	static int x;
	void showStatic()
	{
		System.out.println(x);
	}
}

class DefaultValue
{
	public static void main(String args[])
	{
		Default D = new Default();
		D.show();
		StaticEx st = new StaticEx();
		st.showStatic();
		st.x = 15;
		st.showStatic();
		StaticEx.x = 20;
		System.out.println(StaticEx.x);
		st.showStatic();
	}
}

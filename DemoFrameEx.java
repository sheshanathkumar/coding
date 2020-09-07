import java.awt.*;
import javax.swing.*;

class DemoFrameEx
{
	public static void main(String args[])
	{
		JFrame m = new JFrame("My Frame");
		
		Label l1 = new Label("UserName");
		TextField t1= new TextField();
		TextField t2= new TextField();
		Button b1 = new Button("OK");
		l1.setBounds(10,70,50,20);
		t1.setBounds(80,70,100,20);
		t2.setBounds(50,100,100,20);
		b1.setBounds(80,150,30,30);
		m.add(l1);
		m.add(t1);
		m.add(t2);
		m.add(b1);
		m.setSize(500,700);
		m.setLayout(null);
		m.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		m.setVisible(true);
	}
}
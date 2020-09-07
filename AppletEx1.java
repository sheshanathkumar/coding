import java.applet.*;
import java.awt.*;

public class AppletEx1 extends Applet
{
	public void paint (Graphics g)
	{
		g.drawString("Kaise Ho",20,200);
		g.drawRect(40,50, 50,50);
		g.setColor(Color.green);
		g.fillRect(100,200,40,40);
		Color m = new Color(130,211,190);
		setBackground(m);
	}
}
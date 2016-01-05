import java.applet.*;
import java.awt.event.*;
import java.awt.*;

/*
<applet code = "XORmode" height = 500 width = 400>
</applet>
*/

public class XORmode extends Applet
{
	int X = 250;
	int Y = 200;
	int cX,cY;

	public XORmode()
	{
		addMouseMotionListener(new MouseMotionAdapter()
		{
			public void mouseMoved(MouseEvent me)
			{
				int x = me.getX();
				int y = me.getY();
				cX = x-10;
				cY = y-10; 
				repaint();
			}
		}
		);
	}

	public void paint (Graphics g)
	{
		g.setColor(Color.cyan);
		g.fillOval(80,60,90,70);
		g.setColor(new Color(200,100,150));
		g.fillRect(40,50,80,35);
		g.setXORMode(Color.black);
		g.drawLine(cX-10,cY,cX+10,cY);
		g.drawLine(cX,cY-10,cX,cY+10);
		showStatus((char)('0' + cX) + " " + (char)('0' + cY));
	}
}
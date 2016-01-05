import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*
<applet code = "applet1" height = 500 width = 1000>
<param name = x value = 0>
</applet>
*/

public class applet1 extends Applet implements Runnable
{
	int x = 0;
	int y = 0;
	int r = -5;
	public void init()
	{
		setBackground(Color.cyan);
		setForeground(new Color(12,140,150));
	}

	public void start()
	{
		String param = getParameter("x");
		x = Integer.parseInt(param);
		Thread t = new Thread(this);
		t.start();
	}

	public void run()
	{
		try
		{
			for(int i = 0 ; i < 650 ; i+=10)
			{
				x = i;
				if(y<60)
				{
					y = y + 5;
					r = (int)(r + 0.8);
				}
				else
				{
					y=0;
					r=-5;
				}
				Thread.sleep(100);
				repaint();	
			}
		}
		catch(Exception e)
		{}
	}

	public void paint(Graphics g)
	{
		g.fillRect(850-x,200,100,80);
		g.fillRect(700-x,200,100,80);
		g.fillRect(710-x,180,20,20);
		g.fillRect(800-x,230,50,20);
		g.setColor(Color.black);
		g.fillOval(725-x,160-y,20+r,20+r);
		g.fillOval(735-x,130-y,25+r,25+r);
		g.fillOval(710-x,280,30,30);
		g.fillOval(760-x,280,30,30);
		g.fillOval(860-x,280,30,30);
		g.fillOval(910-x,280,30,30);
	}
}


import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*
<applet code = "applet2" height = 500 width = 1000>
</applet>
*/

public class applet2 extends Applet implements Runnable
{
	int x = 0;
	int y = 0;
	double o = 0;
	int l = 150;
	String msg;

	public void init()
	{
		setBackground(Color.green);
		addMouseMotionListener(new MouseMotionAdapter()
			{
				public void mouseMoved(MouseEvent me)
				{
					msg = "Mouse Coordinates : " + me.getX() + "," + me.getY();
				}
			});
	}

	public void start()
	{
		Thread t = new Thread(this);
		t.start();
	}

	public void run()
	{
		try
		{
			for(;;)
			{
				Thread.sleep(60);
				o = o + 6;
				o = o * 3.141/180;
				x = (int)(l*Math.cos(o));
				y = (int)(l*Math.sin(o));
				o = o *180 / 3.141;
				repaint();
			}
		}
		catch(Exception e)
		{}
	}

	public void paint(Graphics g)
	{
		g.drawOval(100,50,300,300);
		g.setColor(Color.red);
		g.drawLine(250,200,250-x,200-y);
		showStatus(x + " " + y);
		Font f = new Font("Jokerman",Font.BOLD,36);
		g.setFont(f);
		g.drawString(msg,400,400);
	}
}
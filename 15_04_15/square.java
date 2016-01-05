import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*
<applet code = "square" height = 500 width = 500>
</applet>
*/

public class square extends Applet implements Runnable
{
	Thread t = null;
	int l=400;
	int m=400;

	public void start()
	{
		t = new Thread(this);
		t.start();
	}

	public void run()
	{
		for(;;)
		{
			for(;l>10 && m > 10;)
			{	
				try
				{
					repaint();
					Thread.sleep(10);
					l -= 10;
					m -= 3;
				}
				catch(InterruptedException e)
				{
					System.out.println("IE caught");
				}
			}
			for(;l < 440 && m < 440;)
			{
				try
				{
					repaint();
					Thread.sleep(10);
					l += 10;
					m += 2;
				}
				catch(InterruptedException e)
				{
					System.out.println("IE caught");
				}
			}
		}
	}

	public void paint(Graphics g)
	{
		g.fillRect(l,m,50,50);
	}
	
}
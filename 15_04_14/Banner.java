import java.awt.*;
import java.applet.*;

/*
<applet code = "Banner" width=300 height=50 align=center vspace=100 hspace=200>
</applet>
*/

public class Banner extends Applet implements Runnable
{
	String msg = " This is a Simple banner ";
	Thread t = null;

	public void start()
	{
		t = new Thread(this);
		t.start();
	}

	public void run()
	{
		char ch;
		for(;;)
		{
			try
			{
				repaint();
				Thread.sleep(100);
				ch = msg.charAt(0);
				msg = msg.substring(1);
				msg+=ch;
			}
			catch(InterruptedException e)
			{
				System.out.println("IE caught!!");
			}
		}
	}

	public void paint(Graphics g)
	{
		g.drawString(msg,50,30);
		showStatus("The fucking banner");
	}
}
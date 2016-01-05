import java.applet.*;
import java.awt.*;

/*
<applet code = "sqleft" height = 150 width = 500>
</applet>
*/

public class sqleft extends Applet implements Runnable
{
	Thread t = null;
	int l=400; // starting mein square ka left is at 400 :

	public void start()
	{
		t = new Thread(this);
		t.start();
	}

	public void run()
	{
		for(;l>10;) // movement stops when square reaches position 10 pixels left os applet start
		{	
			try
			{
				repaint(); // calling repaint after every decrement
				Thread.sleep(50);//for delay or movement is not visible
				l -= 5; // decreasing the starting left of square
			}
			catch(InterruptedException e)
			{
				System.out.println("IE caught");
			}
		}
	}

	public void paint(Graphics g)
	{
		g.fillRect(l,50,50,50);
	}
	
}
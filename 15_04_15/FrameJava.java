import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*
<applet code = "FrameJava" height = 500 width = 500>
</applet>
*/

class SampleFrame extends Frame
{
	SampleFrame(String title)
	{
		super(title);
		MyWindowAdapter adapter = new MyWindowAdapter(this);
		addWindowListener(adapter);
	}	

	public void paint (Graphics g)
	{
		g.drawString("A frame Window" , 20 , 20);
	}
}

class MyWindowAdapter extends WindowAdapter
{
	SampleFrame s;
	public MyWindowAdapter(SampleFrame f)
	{
		this.s = f;
	}

	public void windowClosing(WindowEvent we)
	{
		s.setVisible(false);
	}
}

public class FrameJava extends Applet
{
	Frame f;
	public void init()
	{
		f = new SampleFrame("Frame window");
		f.setSize(250,250);
		f.setVisible(false);
	}

	public void start()
	{
		f.setVisible(true);
	}

	public void stop()
	{
		f.setVisible(false);
	}

	public void paint(Graphics g)
	{
		g.drawString("Applet window" , 20 , 20);
	}
}
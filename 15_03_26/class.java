
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*
<applet code = "class" width = 200 height = 100>
</applet>
*/
public class Sample class1 extends applet{
	int next = 0;
	Font f;
	String msg;
	public void init()
	{
		Font f = new Font ("Dialog" , Font.PLAIN,12);
		msg = "Dialog";
		setFont(f);
		addMouseListener(new MouseAdapter()
		{
			public void mousePressed(MouseEvent e)
			{
				repaint();
			}
		});
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,50,50);
	}
}
		

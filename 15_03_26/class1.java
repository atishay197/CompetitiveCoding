
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*
<applet code = "class1" width = 200 height = 100>
</applet>
*/
public class class1 extends Applet{
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
				Font f = new Font ("xxx" , Font.Italic,12);
				setFont(f);
			}
		});
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,50,50);
	}
}
		

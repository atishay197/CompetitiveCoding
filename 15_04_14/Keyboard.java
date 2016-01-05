import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code = "Keyboard" height = 500 width = 500>
</applet>
*/

public class Keyboard extends Applet implements KeyListener
{
	String msg = "";
	int x = 10;
	int y = 20;

	public void init()
	{
		addKeyListener(this);
	}

	public void keyPressed(KeyEvent ke)
	{
		showStatus("Key Down");
	}

	public void keyReleased(KeyEvent ke)
	{
		showStatus("Key Up");
	}

	public void keyTyped(KeyEvent ke)
	{
		msg += ke.getKeyChar();
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,x,y);
	}
}
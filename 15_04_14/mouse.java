import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code = "mouse" height = 1000 width = 600>
</applet>
*/

public class mouse extends Applet implements MouseListener, MouseMotionListener
{
	String msg = "Ha";
	int mousex = 20;
	int mousey = 20;

	public void init()
	{
		addMouseListener(this);
		addMouseMotionListener(this);
		setBackground(Color.cyan);
		setForeground(Color.blue);
	}

	public void mouseClicked(MouseEvent me)
	{
		msg = "Mouse clicked";
		repaint();
	}

	public void mouseEntered(MouseEvent me)
	{
		msg = "Mouse Entered";
		repaint();
	}

	public void mouseExited(MouseEvent me)
	{
		msg = "Mouse Exit";
		repaint();
	}

	public void mousePressed(MouseEvent me)
	{
		mousex = me.getX();
		mousey = me.getY();
		msg = "Down";
		repaint();
	}

	public void mouseReleased(MouseEvent me)
	{
		mousex = me.getX();
		mousey = me.getY();
		msg = "Up";
		repaint();
	}

	public void mouseDragged(MouseEvent me)
	{
		mousex = me.getX();
		mousey = me.getY();
		showStatus("Dragging mouse at: " + mousex + " , " + mousey);
	}

	public void mouseMoved(MouseEvent me)
	{	
		mousex = me.getX();
		mousey = me.getY();
		showStatus("Moving mouse at: " + mousex + " , " + mousey);
	}

	public void paint(Graphics g)
	{
		g.drawString(msg, mousex , mousey);
	}

}
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*<applet code = adap height = 500 width = 500>
</applet>
*/

public class adap extends Applet
{
	public void init()
	{
		addMouseListener(new myMouseAdapter(this));
		addKeyListener(new myKeyAdapter(this));
	}
}

class myMouseAdapter extends MouseAdapter
{
	adap a;
	public myMouseAdapter(adap b)
	{
		this.a = b;
	}

	public void mouseClicked(MouseEvent me)
	{
		a.showStatus("MouseClicked");
	}
}

class myKeyAdapter extends KeyAdapter
{
	adap b;
	public myKeyAdapter(adap c)
	{
		this.b = c;
	}

	public void keyPressed(KeyEvent ke)
	{
		b.showStatus(" " + ke.getKeyChar());
	}
}
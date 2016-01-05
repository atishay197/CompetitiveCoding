import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*
<applet code = "applet5" height = 500 width = 1000>
</applet>
*/

public class applet5 extends Applet implements AdjustmentListener
{
	int x = 0;
	int r = 0;
	Scrollbar v,h;
	public void init()
	{

		v = new Scrollbar(Scrollbar.VERTICAL,0,100,0,500);
		h = new Scrollbar(Scrollbar.HORIZONTAL,0,100,0,1000);

		add(v);
		add(h);

		v.addAdjustmentListener(this);
		h.addAdjustmentListener(this);

	}

	public void adjustmentValueChanged(AdjustmentEvent ae)
	{
		r = v.getValue();
		x = h.getValue();
		repaint();
	}

	public void paint(Graphics g)
	{
		g.drawOval(100+x,300,100+r,100+r);
	}
}
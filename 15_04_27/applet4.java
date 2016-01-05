import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*
<applet code = "applet4" height = 500 width = 1000>
</applet>
*/

public class applet4 extends Applet implements ItemListener,ActionListener
{
		Choice a;
		List b;
		String msg = "";
		String msg1 = "";

		public void init()
		{
			a = new Choice();
			b = new List(4,true);

			a.add("Atishay");
			a.add("Sarang");
			a.add("Ishita");
			a.add("Shubham");

			b.add("J");
			b.add("K");
			b.add("L");
			b.add("M");
			//b.select(1);

			add(a);
			add(b);

			a.addItemListener(this);
			b.addActionListener(this);


		}

		public void itemStateChanged(ItemEvent ie)
		{
			repaint(350,450,500,50);
		}

		public void actionPerformed(ActionEvent ae)
		{
			repaint(250,350,500,50);
		}

		public void paint(Graphics g)
		{
			msg += a.getSelectedItem();
			g.drawString(msg,400,500);
			int i[] = b.getSelectedIndexes();
			for (int j=0 ; j<i.length ; j++)
				msg1 +=  b.getItem(i[j]);
			//msg1 += "B: " + b.getSelectedItem();
			g.drawString(msg1,300,400);
		}
}
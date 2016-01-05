import java.applet.*;
import java.awt.event.*;
import java.awt.*;

/*
<applet code = "AWT2" height = 500 width = 400>
</applet>
*/

public class AWT2 extends Applet implements ActionListener,ItemListener
{
	String msg = "";
	String lmsg = "";
	Checkbox xp,mc,w8;
	CheckboxGroup cg = new CheckboxGroup();

	public void init()
	{
		Label one = new Label("One");
		Label two = new Label("Two");
		Label tre = new Label("Tre");

		Button yes = new Button("YES");
		Button no = new Button("NO");
		Button maybe = new Button("Maybe");

		 xp = new Checkbox("XP" , cg , true);
		 mc = new Checkbox("MAC" , cg , false);
		 w8 = new Checkbox("8" , cg ,false);

		add(one);
		add(two);
		add(tre);

		add(yes);
		add(no);
		add(maybe);

		add(xp);
		add(mc);
		add(w8);

		yes.addActionListener(this);
		no.addActionListener(this);
		maybe.addActionListener(this);

		xp.addItemListener(this);
		mc.addItemListener(this);
		w8.addItemListener(this);

	}

	public void actionPerformed(ActionEvent ae)
	{
		String str = ae.getActionCommand();
		if(str.equals("YES"))
		{
			msg = "Yes pressed";
		}
		else if(str.equals("NO"))
		{
			msg = "No pressed";
		}
		else
		{
			msg = "WTF bro??";
		}
		repaint();
	}

	public void itemStateChanged(ItemEvent ie)
	{
		if(xp.getState())
		{
			lmsg = "XP is old bro!!";
		}
		if(mc.getState())
		{
			lmsg = "Really apple?...U r rich bro";
		}
		if(w8.getState())
		{
			lmsg = "Windows 8 LOL!!";
		}
		repaint();
	}

	public void paint(Graphics g)
	{
		g.drawString(msg , 100 , 200);
		g.drawString(lmsg , 100 , 215);
	}
}
import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*
<applet code = "applet3" height = 500 width = 600>
</applet>
*/

public class applet3 extends Applet implements ActionListener,ItemListener
{
	Label one;
	Button two;
	Checkbox a,b,c;
	CheckboxGroup cg;

	public void init()
	{
		cg = new CheckboxGroup();
		
		one = new Label("One");
		add(one);

		two = new Button("Two");
		add(two);
		two.addActionListener(this);

		a = new Checkbox("Atishay",cg,false);
		add(a);
		a.addItemListener(this);
		b = new Checkbox("Saarang",cg,false);
		add(b);
		b.addItemListener(this);
		c = new Checkbox("Ishita",cg,false);
		add(c);
		c.addItemListener(this);
	}

	public void itemStateChanged(ItemEvent i)
	{
		one.setText(cg.getSelectedCheckbox().getLabel());
		repaint();
	}

	public void actionPerformed(ActionEvent ae)
	{
		String str = ae.getActionCommand();
		if(str.equals("Two"))
		{
			one.setText("Button Pressed");
			repaint();
		}
	}

	public void paint(Graphics g)
	{

	}
}

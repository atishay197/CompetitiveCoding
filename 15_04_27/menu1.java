import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*
<applet code = "menu1" height = 500 width = 1000>
</applet>
*/

class menuframe extends Frame
{
	CheckboxMenuItem debug;
	menuframe()
	{
		MenuBar m = new MenuBar();
		setMenuBar(m);

		Menu file = new Menu("File");
		MenuItem item1,item2,item3;
		file.add(item1 = new MenuItem("New"));
		file.add(item2 = new MenuItem("Open"));
		file.add(item3 = new MenuItem("Quit"));

		debug = new CheckboxMenuItem("Debug");
		file.add(debug);

		m.add(file);

		MyMenuHandler handler = new MyMenuHandler(this);

		item1.addActionListener(handler);
		item2.addActionListener(handler);
		item3.addActionListener(handler);
		debug.addActionListener(handler);

	}


		class MyMenuHandler implements ActionListener
		{
			menuframe m;
			MyMenuHandler(menuframe q)
			{
				this.m = q;
			}

			public void actionPerformed(ActionEvent e)
			{
				String a = e.getActionCommand();
				if(a.equals("New"))
				{}
			}
		}
}

	public class menu1 extends Applet
	{
		Frame f;

		public void init()
		{
			f = new menuframe();
			f.setSize(300,300);
			f.setVisible(true);
		}

		public void paint()
		{}
	}
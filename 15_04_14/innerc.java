import java.applet.*;
import java.awt.event.*;

/*
<applet code = innerc height = 500 width = 500>
</applet>
*/

public class innerc extends Applet
{
	public void init()
	{
		addKeyListener(new myKeyAdapter());
	}

	class myKeyAdapter extends KeyAdapter
	{
		public void keyPressed(KeyEvent ke)
		{
			if(ke.getKeyCode() == ke.VK_A)
				showStatus(" " + (char)54);
		
		}
	}	
}
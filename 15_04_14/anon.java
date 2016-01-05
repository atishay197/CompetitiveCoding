import java.applet.*;
import java.awt.event.*;

/*
<applet code = innerc height = 500 width = 500>
</applet>
*/

public class anon extends Applet
{
	public void init()
	{
		addKeyListener(new KeyAdapter()
		{
			public void keyPressed(KeyEvent ke)
			{
				if(ke.getKeyCode() == ke.VK_A)
					showStatus(" " + (char)ke.VK_A);
		
			}
		}
		);
	}
}
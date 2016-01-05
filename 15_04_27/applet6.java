import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*
<applet code = "applet6" height = 500 width = 1000>
</applet>
*/

public class applet6 extends Applet implements ActionListener
{
	TextField name,password;
	String name1 = "" , pass1 = "";
	public void init()
	{
		Label nam = new Label("Name");
		Label pas = new Label("Password");
		name = new TextField(20);
		password = new TextField(6);
		password.setEchoChar('*');

		add(nam);
		add(name);
		add(pas);
		add(password);

		name.addActionListener(this);
		password.addActionListener(this);

	}

	public void actionPerformed(ActionEvent ae)
	{
		name1 = name.getText();
		pass1 = password.getText();
		if(pass1.equals("123456"))
		{
			name.setText("");
			password.setText("");
		}
	}

}
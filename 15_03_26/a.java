import java.awt.event.*;
import java.awt.*;
import java.applet.*;

public class a extends Applet implements ActionListener {
	Label l;
	TextField a,b;
	Button b1,b2;
	public void init() {
		l = new Label("Copier");
		a = new TextField(10);
		b = new TextField(10);
		b1 = new Button("copy");
		b2 = new Button("clear");
		add(l);
		add(a);
		add(b);
		add(b1);
		add(b2);
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent ae) {
		if(ae.getSource()==b1)
		b.setText(a.getText());
		if(ae.getSource()==b2) {
		b.setText("");
		a.setText("");
}		
	}
}
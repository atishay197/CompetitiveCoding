import javax.sound.midi.*;

public class MusicTest
{
	public void play()
	{
		try
		{
			Sequencer s = MidiSystem.getSequencer();
			System.out.print("Sequencer done!!");
		}
		catch (MidiUnavailableException e)
		{
			System.out.print("Jaaaa");
		}
	}

	public static void main(String [] args)
	{
		MusicTest mt = new MusicTest();
		mt.play();
	}
}
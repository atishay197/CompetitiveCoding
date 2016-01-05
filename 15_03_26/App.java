
public class App
{
	public static void main(String[] args)
	{
		String[] wordListOne = {"24/7" , "Multi-tier" , "B-to-B" , "Win-win" , "six-sigma"};
		String[] wordListTwo = {"empowerded" , "oriented" , "leveraged" , "targeted"};
		String[] wordListThree = {"process" , "core competency" , "mindshare" , "paradigm" , "solution"};

		int oneLength = wordListOne.length;
		int twoLength = wordListTwo.length;
		int threeLength = wordListThree.length;

		int rand1 = (int)(Math.random() * oneLength);
		int rand2 = (int)(Math.random() * twoLength);
		int rand3 = (int)(Math.random() * threeLength); 
		int rand11 = (int)(Math.random() * oneLength);
		int rand21 = (int)(Math.random() * twoLength);
		int rand31 = (int)(Math.random() * threeLength); 

		String phrase1 = wordListOne[rand1] + " " + wordListTwo[rand2] + " " + wordListThree[rand3];
		String phrase2 = wordListOne[rand11] + " " + wordListTwo[rand21] + " " + wordListThree[rand31];


		System.out.print("What we need is a " + phrase1 + " and a " + phrase2);
	}
}
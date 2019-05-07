public class Assignment1
{
	public static void main(String[] args)
	{
	int age = 20;
	double tall = 175.7;
	String name ="자바 라";

	// System.out.println(String.format("제 이름은 %s입니다", name));
    // System.out.println(String.format("나이는 %d이고, 키는 %3.1f입니다.", age, tall));
    
    System.out.println("제 이름은 " + name + "입니다.");
    System.out.println("나이는 "+ age +"이고, 키는 "+ tall +"입니다.");
	}
}
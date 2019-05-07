import java.util.Scanner;

// [3] 2장 실습문제 8 (반복적으로 입력값을 받을 수 있도록 반복문(while)을 사용하시오.)
public class Assignment1{
	public static void main(String[] args){
		Scanner stdin = new Scanner(System.in);
		
		int 에스프레소 = 2000;
		int 아메리카노 = 2500;
		int 카푸치노 = 3000;
		int 카페라뗴 = 3500;

		while(true){
			System.out.print("커피 주문하세요>> ");
			String coffee = stdin.next();
			int coffee_N = stdin.nextInt();

			if(coffee.equals("에스프레소"))
				System.out.println(에스프레소 * coffee_N + "원입니다.");
			else if(coffee.equals("아메리카노"))
				System.out.println(아메리카노 * coffee_N + "원입니다.");
			else if(coffee.equals("카푸치노"))
				System.out.println(카푸치노 * coffee_N + "원입니다.");
			else if(coffee.equals("카페라떼"))
				System.out.println(카페라뗴 * coffee_N + "원입니다.");
		}
		
	}
}
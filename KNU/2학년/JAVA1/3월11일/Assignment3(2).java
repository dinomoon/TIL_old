import java.util.Scanner;

// 실습문제 2-8 (2) switch 사용
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
		
			switch(coffee){
				case "에스프레소":
					System.out.println(에스프레소 * coffee_N + "입니다.");
					break;
				case "아메리카노":
					System.out.println(아메리카노 * coffee_N + "입니다.");
					break;
				case "카푸치노":
					System.out.println(카푸치노 * coffee_N + "입니다.");
					break;
				case "카페라떼":
					System.out.println(카페라뗴 * coffee_N + "입니다.");
			}
		}
		
		
			
	}
}
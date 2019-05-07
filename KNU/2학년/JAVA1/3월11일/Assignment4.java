import java.util.Scanner;

// [4] 2장 실습문제 8에서 돈을 받으면 [2]번 처럼 거스름돈을 계산하여 내여주는 프로그램.
public class Assignment1{
	
	public static void Change(int price){
		Scanner stdin = new Scanner(System.in);
		System.out.printf("돈의 액수를 입력하세요: ");
		int money = stdin.nextInt();
		int change = money - price;
		int 오만원 = change / 50000;
		int 만원 = (change % 50000) / 10000;
		int 천원 = (change % 10000) / 1000;
		int 오백원 = money % 1000 / 500;
		int 백원 = money % 1000 % 500 / 100;
		int 십원 = (change % 100) / 10;
		int 일원 = change % 10;

		System.out.println("거스름돈: 오만원"+오만원+"개, 만원"+만원+"개, 천원"+천원+"개, 500원"+오백원+"개, 100원"+백원+"개, 10원"+십원+"개, 1원"+일원+"개");
	}
	public static void main(String[] args){
		Scanner stdin = new Scanner(System.in);

		int 에스프레소 = 2000;
		int 아메리카노 = 2500;
		int 카푸치노 = 3000;
		int 카페라떼 = 3500;

		System.out.print("커피 주문하세요>> ");
		String coffee = stdin.next();
		int coffee_N = stdin.nextInt();
		
		switch(coffee){
			case "에스프레소":
				System.out.println(에스프레소 * coffee_N + "원입니다.");
				Change(에스프레소 * coffee_N);
				break;
			case "아메리카노":
				System.out.println(아메리카노 * coffee_N + "원입니다.");
				Change(아메리카노 * coffee_N);
				break;
			case "카푸치노":
				System.out.println(카푸치노 * coffee_N + "원입니다.");
				Change(카푸치노 * coffee_N);
				break;
			case "카페라떼":
				System.out.println(카페라떼 * coffee_N + "원입니다.");
				Change(카페라떼 * coffee_N);
		}
			
	}
}
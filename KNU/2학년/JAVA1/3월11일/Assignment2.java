import java.util.Scanner;

// [2] 2장 실습문제 6 (반복적으로 입력값을 받을 수 있도록 반복문(while)을 사용하시오.)
public class Assignment2{
	public static void main(String[] args){
		Scanner stdin = new Scanner(System.in);
		
		while(true){
			System.out.printf("돈의 액수를 입력하세요: ");
			int money = stdin.nextInt();
			int 오만원 = money / 50000;
			int 만원 = (money % 50000) / 10000;
			int 천원 = (money % 10000) / 1000;
			int 오백원 = money % 1000 / 500;
			int 백원 = money % 1000 % 500 / 100;
			int 십원 = (money % 100) / 10;
			int 일원 = money % 10;

			System.out.println("오만원"+오만원+"개, 만원"+만원+"개, 천원"+천원+"개, 500원"+오백원+"개, 100원"+백원+"개, 10원"+십원+"개, 1원"+일원+"개");
		}
		
	}
}
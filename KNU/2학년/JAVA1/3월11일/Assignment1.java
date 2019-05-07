import java.util.Scanner;

/*
[1] 성적(정수형)을 입력받아서 90점이상(A), 80점이상(B), 70점이상(C),
60점 이상(D), 60점 미만(F)으로 학점을 출력하는 프로그램을 작성하시오.
성적입력은 Scanner 클래스를 사용하고,
반복적으로 입력값을 받을 수 있도록 반복문(while)을 사용하시오. 
*/
public class Assignment1{
	public static void main(String[] args){
		Scanner stdin = new Scanner(System.in);
		
		while(true){
			System.out.printf("점수를 입력하세요: ");
			int score = stdin.nextInt();
			String result = "";

			switch(score/10){
				case 10: result = "A";
					break;
				case 9: result = "A";
					break;
				case 8: result = "B";
					break;
				case 7: result = "C";
					break;
				case 6: result = "D";
					break;
				case 5: case 4: case 3: case 2: case 1: case 0: result = "F";
					break;
				default: result = "다시 입력해주세요.";
			}
			System.out.println(result);
		}
		
	}
}
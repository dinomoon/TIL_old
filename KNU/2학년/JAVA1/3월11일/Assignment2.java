import java.util.Scanner;

// [2] 2�� �ǽ����� 6 (�ݺ������� �Է°��� ���� �� �ֵ��� �ݺ���(while)�� ����Ͻÿ�.)
public class Assignment2{
	public static void main(String[] args){
		Scanner stdin = new Scanner(System.in);
		
		while(true){
			System.out.printf("���� �׼��� �Է��ϼ���: ");
			int money = stdin.nextInt();
			int ������ = money / 50000;
			int ���� = (money % 50000) / 10000;
			int õ�� = (money % 10000) / 1000;
			int ����� = money % 1000 / 500;
			int ��� = money % 1000 % 500 / 100;
			int �ʿ� = (money % 100) / 10;
			int �Ͽ� = money % 10;

			System.out.println("������"+������+"��, ����"+����+"��, õ��"+õ��+"��, 500��"+�����+"��, 100��"+���+"��, 10��"+�ʿ�+"��, 1��"+�Ͽ�+"��");
		}
		
	}
}
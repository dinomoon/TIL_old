import java.util.Scanner;

// [5] 2장 실습문제 Bonus 1

public class Assignment5{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("식을 입력하세요>>");
        double op1 = scanner.nextDouble();
        String operator = scanner.next();
        double op2 = scanner.nextDouble();
        double result = 0;
        switch(operator){
            case "+": result = op1 + op2; break;
            case "-": result = op1 - op2; break;
            case "*": result = op1 * op2; break;
            case "/":
                if (op2 == 0){
                    System.out.println("0으로 나눌 수 없습니다.");
                    return;
                }
                result = op1 / op2;
                break;
            default: System.out.println("연산 기호가 잘못되었습니다.");
        }
        System.out.println(op1 + " " + operator + " " + op2 + " = " + result);
    }
}
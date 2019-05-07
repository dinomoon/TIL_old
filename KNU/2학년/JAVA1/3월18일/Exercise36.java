import java.util.Scanner;

public class Exercise36{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        while(true){
            System.out.print(">>");
            String text = scanner.nextLine();
            if(text.equals("exit"))     // test == "exit"을 사용하면 돌아가기는 하지만 break문이 실행되지 않는다.
                break;
        }
    }
}
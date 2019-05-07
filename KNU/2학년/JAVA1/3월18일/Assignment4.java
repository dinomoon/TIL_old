import java.util.Scanner;

public class Assignment4{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        String WeekArray[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        // 문자열은 반드시 큰따옴표로 묶어야 한다..
        // 문자는 작은따옴표도 괜찮다..
        int i = 0;

        while(true){
            System.out.print("Give me integer>> ");
            i = scanner.nextInt();
            if(i == -1){
                System.out.print("Bye...");
                break;
            }
            else
                System.out.println(WeekArray[i%7]);
        }
    }
}
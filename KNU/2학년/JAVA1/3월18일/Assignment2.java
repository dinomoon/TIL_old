// 실습문제 3-2
import java.util.Scanner;

public class Assignment2{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int IntArray[] = new int[10];
        for(int i=0; i<IntArray.length; i++)
            IntArray[i] = scanner.nextInt();

        for(int i=0; i<IntArray.length; i++)
            if(IntArray[i]%3 == 0)
                System.out.print(IntArray[i] + " ");
    }
}
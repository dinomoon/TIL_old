import java.util.Scanner;
public class Exercise38{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Give me five integers");
        int intArray[] = new int[5];
        double sum = 0.0;   // 초기화 안하면 오류생김.. 왜인지는 모르겠당,,, => 어떤 값이 있는 줄 알아야 출력을 하던가 더해주던가 하지!!

        for(int i=0; i<intArray.length; i++){
            intArray[i] = scanner.nextInt();
            sum += intArray[i];
        }
            

        System.out.println(sum);
    }
}
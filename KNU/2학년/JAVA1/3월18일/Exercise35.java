import java.util.Scanner;

public class Exercise35{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Give me integers");
        int sum=0;
        for(int i=0; i<5; i++){
            int n = scanner.nextInt();
            if(n<=0)
                continue;
            else
                sum += n;
        }

        System.out.println(sum);
    }
}
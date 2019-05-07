import java.util.Scanner;

public class Assignment6{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        String eng[] = {"student", "love", "java", "happy", "future"};
        String kor[] = {"학생", "사랑", "자바", "행복한", "미래"};
        String word = "";
        
        while(true){
            System.out.print("Give me the word>> ");
            word = scanner.next();

            if(word.equals("exit")){
                System.out.println("Bye..");
                break;
            }
            else{
                for(int i=0; i<eng.length; i++)
                    if(word.equals(eng[i]))  // word == eng[i] (X)
                        System.out.println(kor[i]);
            }
        }
    }
}
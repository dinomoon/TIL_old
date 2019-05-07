// 영문 소문자를 하나 입력받고 그 문자보다 알파벳 순위가 낮은 모든 문자를 출력하는 프로그램

import java.util.Scanner;

public class Assignmnet1{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        char alphabet;
        char printal;

        alphabet = scanner.next().charAt(0);
        n = (int)alphabet;

        for(int i=97; i<=n; i++){
            for(int j=i; j<=n; j++){
                printal = (char)j;
                System.out.print(printal);
            }
            System.out.println();
        }
    }
}
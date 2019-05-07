// 실습 문제 3-5 정수를 10개 입력받아 배열에 저장하고 증가 순으로 정렬하여 출력하라.

import java.util.Scanner;

public class Assignment3{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int IntArray[] = new int[10];
        int temp = 0;
        
        System.out.print("Give me 10 integers>>");
        for(int i=0; i<IntArray.length; i++)
            IntArray[i] = scanner.nextInt();
            
        for(int i=IntArray.length; i>0; i--){
            for(int j=0; j<i-1; j++){
                if(IntArray[j] > IntArray[j+1]){
                    temp = IntArray[j];
                    IntArray[j] = IntArray[j+1];
                    IntArray[j+1] = temp;
                }
            }
        }

        // Arrays.sort(IntArray);

        for(int i=0; i<IntArray.length; i++)
            System.out.print(IntArray[i] + " ");
    }
}
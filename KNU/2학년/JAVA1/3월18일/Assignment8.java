// 컴퓨터와 가위 바위 paper "그만"을 입력하면 게임을 종료한다.

import java.util.Scanner;

public class Assignment8{
    public static void main(String[] args){
        
        Scanner scanner = new Scanner(System.in);
        String str[] = {"scissor", "rock", "paper"};

        System.out.println("Let`s play the game.");
        
        
        while(true){
            System.out.print("scissor rock paper!>> ");
            String user = scanner.next();

            int n = (int)(Math.random()*3);

            if(user.equals("stop")){
                System.out.println("Bye..");
                break;
            }
            else if(str[n].equals(user))
                System.out.println("user = " + user + ", " + "computer = " + str[n] + ", draw.");

            else if(n==0){
                if(user.equals("rock"))
                    System.out.println("user = " + user + ", " + "computer = " + str[n] + ", user win.");
                else
                    System.out.println("user = " + user + ", " + "computer = " + str[n] + ", computer win.");
            }
            else if(n==1){
                if(user.equals("scissor"))
                    System.out.println("user = " + user + ", " + "computer = " + str[n] + ", computer win.");
                else
                    System.out.println("user = " + user + ", " + "computer = " + str[n] + ", user win.");
            }
            else if(n==2){
                if(user.equals("scissor"))
                    System.out.println("user = " + user + ", " + "computer = " + str[n] + ", user win.");
                else
                    System.out.println("user = " + user + ", " + "computer = " + str[n] + ", computer win.");
            }
        } 
    }
}
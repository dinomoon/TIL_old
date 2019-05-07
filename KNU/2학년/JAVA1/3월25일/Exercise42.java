// Rectanle 클래스 만들기 연습

import java.util.Scanner;

class Rectangle{
    int width;
    int height;
    public int getArea(){
        return width * height;
    }
}

public class RectApp{
    public static void main(String[] args){
        Rectangle rect = new Rectangle();
        Scanner scanner = new Scanner(System.in);
        System.out.print(">> ");
        rect.width = scanner.nextInt();
        rect.height = scanner.nextInt();
        System.out.println("Rect`s ares: " + rect.getArea());
        scanner.close();
    }
}
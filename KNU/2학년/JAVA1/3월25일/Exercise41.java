// Circle 클래스의 객체 생성 및 활용

public class Circle{
    int radius;
    String name;

    public double getArea(){
        return 3.14 * radius * radius;
    }

    public static void main(String[] args){
        Circle pizza;
        pizza = new Circle();
        pizza.radius = 10;
        pizza.name = "JavaPizza";
        double area = pizza.getArea();
        System.out.println(pizza.name + "`s area: " + area);

        Circle donut = new Circle();
        donut.radius = 2;
        donut.name = "JavaDonut";
        area = donut.getArea();
        System.out.println(donut.name + "`s area: " + area);
    }
}
class Point{
    private int x, y;
    public Point(int x, int y){ this.x = x; this.y = y; }
    public int getX(){ return x; }
    public int getY(){ return y; }
    protected void move(int x, int y){ this.x = x; this.y = y; }
}
class ColorPoint extends Point{
    private String Color;
    public ColorPoint(int x, int y, String Color){
        super(x, y);
        this.Color = Color;
    }
    public void setPoint(int x, int y){
        move(x, y);
    }
    public void setColor(String Color){
        this.Color = Color;
    }
    public void show(){
        System.out.println(this.Color + " color" + "(" + getX() +  "," + getY() + ")");
    }
}
public class Assignment54{
    public static void main(String[] args){
        ColorPoint cp = new ColorPoint(5, 5, "YELLOW");
        cp.setPoint(10, 20);
        cp.setColor("GREEN");
        cp.show();
    }
}

import javax.swing.*;
import java.awt.*;

public class project extends JFrame {
    public project(){
        //setTitle("project");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setContentPane(new MyPanel());

        setSize(500, 500);
        setVisible(true);
    }
    class MyPanel extends JPanel {
        public void paintComponent(Graphics g){
            g.setColor(Color.DARK_GRAY);
            g.drawLine(10, 10, 100, 100);
        }
    }
    public static void main(String[] args){
        new project();
    }
}
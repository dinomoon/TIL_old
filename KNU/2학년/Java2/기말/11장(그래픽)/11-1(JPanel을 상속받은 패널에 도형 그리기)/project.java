import javax.swing.*;
import java.awt.*;

public class project extends JFrame {
    public project() {
        setTitle("Project");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setContentPane(new MyPanel());

        setSize(400, 400);
        setVisible(true);
    }

    class MyPanel extends JPanel {
        public void paintComponent(Graphics g){
            super.paintComponent(g);
            g.setColor(Color.BLUE);
            g.drawRect(10, 10, 100, 100);

            g.setColor(Color.RED);
            g.drawRect(20, 20, 100, 100);

            g.setColor(Color.BLACK);
            g.drawRect(30, 30, 100, 100);
        }
    }
    public static void main(String[] args){
        new project();
    }
}
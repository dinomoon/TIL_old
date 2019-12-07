import javax.swing.*;
import java.awt.*;

public class project extends JFrame {
    public project(){
        setTitle("project");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setContentPane(new MyPanel());

        setSize(400, 400);
        setVisible(true);
    }
    class MyPanel extends JPanel {
        public void paintComponent(Graphics g) {
            super.paintComponent(g);
            g.drawString("WOW", 30, 30);

            g.setColor(new Color(255,0,255));
            g.setFont(new Font("Arial", Font.ITALIC, 30));
            g.drawString("Wow2", 60, 60);

            g.setColor(Color.DARK_GRAY);
            g.setFont(new Font("Arial", Font.BOLD ,40));
            g.drawString("Wow3", 90, 90);

            g.setColor(new Color(255, 155, 100));
            for(int i=1; i<=3; i++){
                g.setFont(new Font("Jokeman", Font.BOLD, i*20));
                g.drawString("Wow4", 120, 60*i + 40);
            }
        }
    }
    public static void main(String[] args){
        new project();
    }
}
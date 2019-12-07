import javax.swing.*;
import java.awt.*;

public class project extends JFrame {
    public project() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setContentPane(new MyPanel());

        setSize(400, 400);
        setVisible(true);
    }
    class MyPanel extends JPanel {
        private ImageIcon icon = new ImageIcon("images/son.png");
        private Image img = icon.getImage();

        public void paintComponent(Graphics g){
            super.paintComponent(g);

            g.drawImage(img, 0, 0, getWidth(), getHeight(), this);
        }
    }
    public static void main(String[] args){
        new project();
    }
}
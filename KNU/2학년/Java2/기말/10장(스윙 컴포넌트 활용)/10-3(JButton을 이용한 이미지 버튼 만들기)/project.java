import javax.swing.*;
import java.awt.*;

public class project extends JFrame {
    public project(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        ImageIcon normalIcon = new ImageIcon("images/normalIcon.png");
        ImageIcon rolloverIcon = new ImageIcon("images/rolloverIcon.png");
        ImageIcon pressedIcon = new ImageIcon("images/pressedIcon.png");

        JButton btn = new JButton("Call ME~!", normalIcon);
        btn.setRolloverIcon(rolloverIcon);
        btn.setPressedIcon(pressedIcon);
        c.add(btn);

        setSize(400, 400);
        setVisible(true);
    }
    public static void main(String[] args){
        new project();
    }
}
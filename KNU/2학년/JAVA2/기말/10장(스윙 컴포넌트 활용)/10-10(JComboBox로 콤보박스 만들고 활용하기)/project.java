import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

// 흠.. 안된다.. 이유는 모르겠따.. 
public class project extends JFrame {
    private String [] btns = {"normalIcon", "rolloverIcon", "pressedIcon"};
    private ImageIcon [] images = { 
        new ImageIcon("images/normalIcon.png"),
        new ImageIcon("images/rolloverIcon.png"),
        new ImageIcon("images/pressedIcon.png")
    };
    private JLabel imgLabel = new JLabel(images[0]);
    public project() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        JComboBox<String> combo = new JComboBox<String>(btns);
        c.add(combo);
        c.add(imgLabel);

        combo.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                JComboBox<String> cb = (JComboBox<String>)e.getSource();

                int index = cb.getSelectedIndex();

                imgLabel.setIcon(images[index]);
            }
        });

        setSize(300, 300);
        setVisible(true);
    }
    public static void main(String[] args){
        new project();
    }
}
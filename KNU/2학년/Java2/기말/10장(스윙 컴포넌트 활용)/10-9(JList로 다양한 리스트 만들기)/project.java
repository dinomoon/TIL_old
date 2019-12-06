import javax.swing.*;
import java.awt.*;

public class project extends JFrame {
    private String [] fruits = {"apple", "banana", "kiwi", "mango", "pear", "peach","apple", "banana", "kiwi", "mango", "pear", "peach"};
    private ImageIcon [] images = { 
        new ImageIcon("images/normalIcon.png"),
        new ImageIcon("images/rolloverIcon.png"),
        new ImageIcon("images/pressedIcon.png")
    };
    public project(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        JList<String> strList = new JList<String>(fruits);
        c.add(strList);

        JList<ImageIcon> imageList = new JList<ImageIcon>(images);
        c.add(imageList);

        JList<String> scrollList = new JList<String>(fruits);
        c.add(new JScrollPane(scrollList));
        // c.add(new JScrollPane(strList)); 라고 하면 위에서 만든 JList가 JScrollPane으로 바뀐다.

        setSize(300, 300);
        setVisible(true);
    }
    public static void main(String[] args){
        new project();
    }
}
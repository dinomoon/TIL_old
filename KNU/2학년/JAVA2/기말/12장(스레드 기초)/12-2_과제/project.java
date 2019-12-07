//본 클래스를 스레드화 시키기
import java.awt.*;
import javax.swing.*;

public class project extends JFrame implements Runnable {
    JLabel timerLabel = new JLabel(); //JLabel timerLabel; 이라고만 하면 안된다..
    public project(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        timerLabel.setFont(new Font("Gothic", Font.ITALIC, 80));
        c.add(timerLabel);

        Thread th = new Thread(this); // 이 부분이 가장 중요할 듯
        setSize(250, 150);
        setVisible(true);

        th.start();
    }
    public void run() {
        int n = 0;
        while(true){
            timerLabel.setText(Integer.toString(n));
            n++;
            try {
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                return;
            }
        }     
    }
    public static void main(String[] args){
        new project();
    }
}
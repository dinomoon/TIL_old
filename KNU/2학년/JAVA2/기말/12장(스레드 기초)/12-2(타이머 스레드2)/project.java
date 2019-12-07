import javax.swing.*;
import java.awt.*;

class TimerRunnable implements Runnable {
    private JLabel timerLabel;

    public TimerRunnable(JLabel timerLabel) {
        this.timerLabel = timerLabel;
    }
    public void run() {
        int n = 0;
        while(true) {
            timerLabel.setText(Integer.toString(n));
            n++;
            try {
                Thread.sleep(1000); // Thread를 상속 받으면 그냥 sleep
            }
            catch(InterruptedException e) {
                return;
            }
        }
    }
}

public class project extends JFrame {
    public project() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        JLabel timerLabel = new JLabel();
        timerLabel.setFont(new Font("Gothic", Font.ITALIC, 80));
        c.add(timerLabel);

        TimerRunnable runnable = new TimerRunnable(timerLabel);
        Thread th = new Thread(runnable); //runnable 인터페이스를 이용하면 이렇게 두 줄을 써야한다.

        setSize(250, 150);
        setVisible(true);

        th.start();
    }
    public static void main(String[] args){
        new project();
    }
}
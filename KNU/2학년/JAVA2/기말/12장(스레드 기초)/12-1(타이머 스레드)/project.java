import java.awt.*;
import javax.swing.*;

class TimerThread extends Thread {
    private JLabel timerLabel;
    public TimerThread(JLabel timerLabel) {
        this.timerLabel = timerLabel;
    }
    public void run() {
        int n = 0;
        while(true) {
            timerLabel.setText(Integer.toString(n));
            n++;
            try {
                sleep(1000);
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
        c.setLayout(new FlowLayout()); // 가운데에 숫자가 오게 하기 위함
        JLabel timerLabel = new JLabel();
        timerLabel.setFont(new Font("Gothic", Font.BOLD, 70));
        c.add(timerLabel);

        TimerThread th = new TimerThread(timerLabel);

        setSize(300, 300); // 필수로 작성
        setVisible(true); // 필수로 작성

        th.start();
    }
    public static void main(String[] args){
        new project();
    }
}
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.Random;

public class project extends JFrame implements Runnable {
    private Thread th;
    public project() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 300);
        setLocation(500, 500);
        setVisible(true);
        
        getContentPane().addMouseListener(new MouseAdapter() {
            public void mousePressed(MouseEvent e) {
                if(!th.isAlive()) return;
                th.interrupt();
            }
        });

        th = new Thread(this);
        th.start();  
    }
    public void run() {
        Random r = new Random();
        while(true) {
            try {
                Thread.sleep(24);
            }
            catch(InterruptedException e) {
                return;
            }
            int x = getX() + r.nextInt() % 5;
            int y = getY() + r.nextInt() % 5;
            setLocation(x, y);
        }
    }
    public static void main(String[] args){
        new project();
    }
}
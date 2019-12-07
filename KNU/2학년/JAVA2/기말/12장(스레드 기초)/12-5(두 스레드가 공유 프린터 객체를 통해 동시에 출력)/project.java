public class project {
    public static void main(String[] args){
        SharedPrinter p = new SharedPrinter();
        String [] engText = {
            "Wise men Say ",
            "only fools rush in",
            "But I can`t help"
        };
        String [] korText = {
            "동해물과 백두산이 마르고 닳도록, ",
            "하느님이 보우하사 우리 나라 만세",
            "무궁과 삼천리 화려강산"
        };
        Thread th1 = new WorkerThread(p, engText);
        Thread th2 = new WorkerThread(p, korText);

        th1.start();
        th2.start();
    }
}

class SharedPrinter {
    synchronized void print(String text) {
        for(int i=0; i<text.length(); i++)
            System.out.print(text.charAt(i));
        System.out.println();
    }
}

class WorkerThread extends Thread {
    private SharedPrinter p;
    private String [] text;

    public WorkerThread(SharedPrinter p, String[] text) {
        this.p = p; this.text = text;
    }

    public void run() {
        for(int i=0; i<text.length; i++)
            p.print(text[i]);
    }
}
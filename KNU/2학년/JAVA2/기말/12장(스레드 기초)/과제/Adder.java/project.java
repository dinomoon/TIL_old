class Sum extends Thread {
    int num;
    int start = 1;
    int end = 100;

    public Sum() { num = 0; }
    public void addNum(int n) { num += n; }
    public int getNum() {return num;}

    public void run() {
        for(int i=start; i<=end; i++) {
            this.addNum(i);
            
        }
    }
}
public class project {
    public static void main(String[] args){
        Sum mySum = new Sum();
        mySum.start();
        try {
            mySum.join();
        }
        catch (InterruptedException e) {
            return;
        }
        System.out.println(mySum.getNum());
    }
}
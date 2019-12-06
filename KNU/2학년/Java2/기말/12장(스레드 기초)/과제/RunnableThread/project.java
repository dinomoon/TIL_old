class Sum {
	int num;
	public Sum() { num = 0; }
	public void addNum(int n) { num += n; }
	public int getNum() { return num; }
}

class AdderThread extends Thread {	
	Sum obj;
	int start, end;
	
	public AdderThread(Sum sum, int s, int e)
	{	
		obj = sum;
		start = s;
		end = e;
	}
	public void run()
	{
		for(int i = start; i <= end; i++)
			obj.addNum(i);
	}
}

class project {
	public static void main(String[] args) {
		Sum s = new Sum();
		Thread at1 = new AdderThread(s, 1, 50);
		Thread at2 = new AdderThread(s, 51, 100);
		at1.start();
		at2.start();
		try {
			at1.join(); // at1�� ���� �� ���� main�����带 ������Ų��.
			at2.join();
		}
		catch(InterruptedException e) {
			e.printStackTrace();
		}
		
		System.out.println("1~100������ ��: " + s.getNum());
	}
}
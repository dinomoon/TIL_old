/* 
�� ���� 5���� �ϼ��� ���α׷��� �ټ��� ģ�� ������ ������ �� �ֵ���

�Ʒ��� ����� �߰��Ͽ� �ϼ��Ͻÿ�.

1)  ģ�� ���� ��� ���

2)  ��ϵ� ģ�� ã�� ���

3)  ��ϵ� ģ���� �����ϴ� ���

4)  �迭�� �ʰ��� ��� �ڵ������� �迭�� ũ�⸦ �÷��ִ� ���.
*/

// �迭 ũ�� �ڵ����� �÷��ֱ� �߰�

import java.util.Scanner;
import java.util.Arrays;

class PhoneInfo
{
	String name;
	String phoneNum;
	String birth;
		
	// ������1
	public PhoneInfo(String name, String phoneNum, String birth)
	{	
		// ä�� �����ÿ�.
		this.name = name;
		this.phoneNum = phoneNum;	
		this.birth = birth;
	}

	// ������2
	public PhoneInfo(String name, String phoneNum)
	{
		// ä�� �����ÿ�.
		this(name, phoneNum, null);
	}

	// ��� �Լ�
	public void showPhoneInfo()
	{
		System.out.println("name: " + name);
		System.out.println("phone: " + phoneNum);
		if(birth!=null)
			System.out.println("birth: " + birth);
		else
			System.out.println("birth: ");
		System.out.println("");	// ������ ������ ����
	}
}

class PhoneManager
{	
	int MAX = 2;
	PhoneInfo[] Data = new PhoneInfo[MAX];
	int cnt = 0;
	public static Scanner scanner = new Scanner(System.in);

	// �޴���
	public static void showMenu()
	{
		System.out.println("\n");
		System.out.println("�޴��� �����ϼ���.");
		System.out.println("1. ��ȭ��ȣ �߰��ϱ�");
		System.out.println("2. �˻��ϱ�");
		System.out.println("3. �����ϱ�");
		System.out.println("4. ��� ���� ���");
		System.out.println("5. �������");
	}

	// �߰� ���
	public void inputData()
	{	
		// �迭�� ũ�� �ڵ����� �÷��ֱ�
		if(Data.length == cnt)
			Data = Arrays.copyOf(Data, Data.length * 2);

		System.out.print("�̸��� �Է����ּ���: ");
		String name = scanner.nextLine();

		System.out.print("��ȭ��ȣ�� �Է����ּ���: ");
		String phoneNum = scanner.nextLine();

		System.out.print("��������� �Է����ּ���(��������): ");
		String birth = scanner.nextLine();

		Data[cnt] = new PhoneInfo(name, phoneNum, birth);
		System.out.println("\n\n�Էµ� ������ Ȯ�����ּ���.");
		
		Data[cnt].showPhoneInfo();
		cnt++;
	}

	// �˻� ���
	public void searchData()
	{
		System.out.println("�˻��� �����մϴ�.");
		System.out.print("�̸�: ");
		String name = scanner.nextLine();
		int index = search(name);
		if(index < 0)
		{
			System.out.println("�ش� �̸��� �ڷᰡ �����ϴ�.");
		}
		else
		{
			Data[index].showPhoneInfo();
			System.out.println("�˻��Ͽ����ϴ�.");
		}
	}

	// ���� ���
	public void delData()
	{
		System.out.println("�����ϽǺ��� �̸��� �Է����ּ���: ");
		String name = scanner.nextLine();
		int index = search(name);
		if(index < 0)
		{
			System.out.println("�ش� �̸��� �ڷᰡ �����ϴ�.\n");
		}
		else
		{
			for(int idx = index; idx < (cnt-1); idx++)
				Data[idx] = Data[idx+1];
			cnt--;
		}
	}

	// ��� ���� ��� ���
	public void ShowAll()
	{
		for(int idx = 0; idx < cnt; idx++)
		{
			Data[idx].showPhoneInfo();
			System.out.println("=========================");
		}
		System.out.println("��� ������ ����Ͽ����ϴ�.");
			
	}

	private int search(String name)
	{
		for(int idx = 0; idx < cnt; idx++)
		{
			PhoneInfo pointInfo = Data[idx];
			if(name.compareTo(pointInfo.name)==0)
				return idx;
		}
		return -1;
	}
}

class PhoneManage
{
	public static void main(String[] args)
	{	
		int sel;
		PhoneManager manager = new PhoneManager();

		while(true)
		{
			manager.showMenu();
			sel = manager.scanner.nextInt();
			manager.scanner.nextLine();
			switch(sel)
			{
				case 1:
					manager.inputData();
					break;
				case 2:
					manager.searchData();
					break;
				case 3:
					manager.delData();
					break;
				case 4:
					manager.ShowAll();
					break;
				case 5:
					System.out.println("�ý��� ����");
					return;
			}
		}
	}
}
	

	


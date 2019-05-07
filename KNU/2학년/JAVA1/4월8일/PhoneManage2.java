/* 
★ 과제 5에서 완성된 프로그램을 다수의 친구 정보를 관리할 수 있도록

아래의 기능을 추가하여 완성하시오.

1)  친구 정보 등록 기능

2)  등록된 친구 찾기 기능

3)  등록된 친구를 삭제하는 기능

4)  배열이 초과될 경우 자동적으로 배열의 크기를 늘려주는 기능.
*/

// 배열 크기 자동으로 늘려주기 추가

import java.util.Scanner;
import java.util.Arrays;

class PhoneInfo
{
	String name;
	String phoneNum;
	String birth;
		
	// 생성자1
	public PhoneInfo(String name, String phoneNum, String birth)
	{	
		// 채워 넣으시오.
		this.name = name;
		this.phoneNum = phoneNum;	
		this.birth = birth;
	}

	// 생성자2
	public PhoneInfo(String name, String phoneNum)
	{
		// 채워 넣으시오.
		this(name, phoneNum, null);
	}

	// 멤버 함수
	public void showPhoneInfo()
	{
		System.out.println("name: " + name);
		System.out.println("phone: " + phoneNum);
		if(birth!=null)
			System.out.println("birth: " + birth);
		else
			System.out.println("birth: ");
		System.out.println("");	// 데이터 구분을 위해
	}
}

class PhoneManager
{	
	int MAX = 2;
	PhoneInfo[] Data = new PhoneInfo[MAX];
	int cnt = 0;
	public static Scanner scanner = new Scanner(System.in);

	// 메뉴판
	public static void showMenu()
	{
		System.out.println("\n");
		System.out.println("메뉴를 선택하세요.");
		System.out.println("1. 전화번호 추가하기");
		System.out.println("2. 검색하기");
		System.out.println("3. 삭제하기");
		System.out.println("4. 모든 정보 출력");
		System.out.println("5. 사용종료");
	}

	// 추가 기능
	public void inputData()
	{	
		// 배열의 크기 자동으로 늘려주기
		if(Data.length == cnt)
			Data = Arrays.copyOf(Data, Data.length * 2);

		System.out.print("이름을 입력해주세요: ");
		String name = scanner.nextLine();

		System.out.print("전화번호를 입력해주세요: ");
		String phoneNum = scanner.nextLine();

		System.out.print("생년월일을 입력해주세요(생략가능): ");
		String birth = scanner.nextLine();

		Data[cnt] = new PhoneInfo(name, phoneNum, birth);
		System.out.println("\n\n입력된 정보를 확인해주세요.");
		
		Data[cnt].showPhoneInfo();
		cnt++;
	}

	// 검색 기능
	public void searchData()
	{
		System.out.println("검색을 시작합니다.");
		System.out.print("이름: ");
		String name = scanner.nextLine();
		int index = search(name);
		if(index < 0)
		{
			System.out.println("해당 이름의 자료가 없습니다.");
		}
		else
		{
			Data[index].showPhoneInfo();
			System.out.println("검색하였습니다.");
		}
	}

	// 삭제 기능
	public void delData()
	{
		System.out.println("삭제하실분의 이름을 입력해주세요: ");
		String name = scanner.nextLine();
		int index = search(name);
		if(index < 0)
		{
			System.out.println("해당 이름의 자료가 없습니다.\n");
		}
		else
		{
			for(int idx = index; idx < (cnt-1); idx++)
				Data[idx] = Data[idx+1];
			cnt--;
		}
	}

	// 모든 정보 출력 기능
	public void ShowAll()
	{
		for(int idx = 0; idx < cnt; idx++)
		{
			Data[idx].showPhoneInfo();
			System.out.println("=========================");
		}
		System.out.println("모든 정보를 출력하였습니다.");
			
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
					System.out.println("시스템 종료");
					return;
			}
		}
	}
}
	

	


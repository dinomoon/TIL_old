import java.util.Scanner;
import java.util.Arrays;

class FriendInfo
{
	String name;
	String phoneNum;
	String birth;
		
	// 생성자1
	public FriendInfo(String name, String phoneNum, String birth)
	{	
		// 채워 넣으시오.
		this.name = name;
		this.phoneNum = phoneNum;
		this.birth = birth;
	}

	// 생성자2
	public FriendInfo(String name, String phoneNum)
	{
		// 채워 넣으시오.
		this(name, phoneNum, null);
	}

	// 멤버 함수
	public void showFriendInfo()
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

class HighFriend extends FriendInfo
{   
    String nickname;
    public HighFriend(String name, String phoneNum, String birth, String nickname)
    {
        super(name, phoneNum, birth);
        this.nickname = nickname;
    }
}

class UnivFriend extends FriendInfo
{
    String major;
    public UnivFriend(String name, String phoneNum, String birth, String major)
    {
        super(name, phoneNum, birth);
        this.major = major;
    }
}

class FriendManager
{	
	int MAX = 2;
	FriendInfo[] Data = new FriendInfo[MAX];
	int cnt = 0;
	public static Scanner scanner = new Scanner(System.in);

	// 메뉴판
	public static void showMenu()
	{
		System.out.println("\n");
		System.out.println("메뉴를 선택하세요.");
		System.out.println("1. 고등학교 친구 저장하기");
        System.out.println("2. 대학교 친구 저장하기");
        System.out.println("3. 검색하기");
		System.out.println("4. 삭제하기");
		System.out.println("5. 모든 정보 출력");
		System.out.println("6. 사용종료");
	}

	// 추가 기능
	public void inputHighData()
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
        
        System.out.print("별명을 입력해주세요: ");
		String nickname = scanner.nextLine();

		Data[cnt] = new HighFriend(name, phoneNum, birth, nickname);
		System.out.println("\n\n입력된 정보를 확인해주세요.");
		
		Data[cnt].showFriendInfo();
		cnt++;
    }
    
    public void inputUnivData()
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
        
        System.out.print("전공을 입력해주새요: ");
		String major = scanner.nextLine();

		Data[cnt] = new UnivFriend(name, phoneNum, birth, major);
		System.out.println("\n\n입력된 정보를 확인해주세요.");
		
		Data[cnt].showFriendInfo();
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
			Data[index].showFriendInfo();
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
			Data[idx].showFriendInfo();
			System.out.println("=========================");
		}
		System.out.println("모든 정보를 출력하였습니다.");
			
	}

	private int search(String name)
	{
		for(int idx = 0; idx < cnt; idx++)
		{
			FriendInfo pointInfo = Data[idx];
			if(name.compareTo(pointInfo.name)==0)
				return idx;
		}
		return -1;
	}
}

class Friend
{
	public static void main(String[] args)
	{	
		int sel;
		FriendManager manager = new FriendManager();

		while(true)
		{
			manager.showMenu();
			sel = manager.scanner.nextInt();
			manager.scanner.nextLine();
			switch(sel)
			{
				case 1:
					manager.inputHighData();
                    break;
                case 2:
					manager.inputUnivData();
                    break;
				case 3:
					manager.searchData();
					break;
				case 4:
					manager.delData();
					break;
				case 5:
					manager.ShowAll();
					break;
				case 6:
					System.out.println("시스템 종료");
					return;
			}
		}
	}
}
	

	


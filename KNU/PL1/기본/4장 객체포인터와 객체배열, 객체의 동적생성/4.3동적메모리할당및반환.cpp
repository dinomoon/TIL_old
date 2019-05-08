// 동적메모리는 왜 쓰는가?
// 예를 들어 학생들의 점수를 저장하는 프로그램이 있다고 하자.
// 학생 수는 수십 명에서 많게는 수천 명, 수만 명에 이를 수 있다.
// 이럴 경우 정적으로 score[1000000] 이렇게 만들면 굉장히 많은 메모리가 낭비될 수있다.
// 따라서, 실행 중에 필요한 만큼만 메모리를 할당 받기 위해 동적메모리를 사용한다.

// new와 delete의 기본 활용
// 데이터타입 *포인터변수 = new 데이터타입;
// delete 포인터변수;
// int *pInt = new int;
// char *pChar = new char;
// Circle *pCircle = new Circle();
// delete pInt;
// delete pChar;
// delete pCircle;

// 예제 4-5 정수형 공간의 동적 할당 및 반환
#include <iostream>
using namespace std;

int ex1(){
  int *p;
  p = new int;  // int 타입 1개 할당
  if(!p){
    cout << "NULL" ;
    return 0;
  }

  *p = 5; // 할당 받은 정수 공간에 5 기록
  int n = *p;
  cout << "*p: " << *p << endl;
  cout << "n: " << n << endl;

  delete p;
}

// 예제 4-6 정수형 배열의 동적 할당 및 반환
int ex2(){
  cout << "num: ";
  int n;
  cin >> n;
  if(n<=0) return 0;
  int *p2 = new int[n];
  if(!p2){
    cout << "NULL" ;
    return 0;
  }

  for(int i=0; i<n; i++){
    cout << i+1 << ": " ;
    cin >> p2[i];
  }

  int sum = 0;
  for(int i=0; i<n; i++)
    sum += p2[i];
  cout << "average: " << sum/n << endl;

  delete [] p2;
}

int main(){
  ex2();
}

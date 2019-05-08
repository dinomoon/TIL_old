// 동적메모리: 필요한 만큼 메모리를 할당받기 위해 사용한다.
#include<iostream>
using namespace std;

// 기본활용: 데이터타입 *포인터변수 = new 데이터타입;
//          delete 포인터변수;

int main(){

  // 기초
  int *pInt = new int; // int 타입의 정수 공간 할당
  int *pInt2 = new int(20); // 20으로 초기화된 int공간 할당
  delete pInt; // 할당받은 정수 공간 반환


  // 정수형 공간의 동적 할당 및 반환
  int *p;

  p = new int;
  *p = 5;
  int n = *p;
  cout << "*p = " << *p << endl;
  cout << " n = " <<  n << endl;

  delete p;
}

// 배열의 동적 할당 및 반환

#include <iostream>
using namespace std;

int main(){
  // 기초
  int *p = new int[5]; // 크기가 5인 정수형 배열의 동적 할당
  for(int i = 0; i<5; i++)
    p[i] = i; // 배열에 순서대로 0,1,2,3,4를 기록한다.

  delete [] p;


  // 예제) 사용자로부터 정수의 개수를 입력 받아 동적 할당받고,
  // 하나씩 정수를 입력받은 후 평균을 출력하는 프로그램.
  cout << "How many integers? ";
  int n;
  cin >> n; // 정수의 개수 입력;
  if(n <= 0) return 0;
  int *array = new int[n];

  for(int i=0; i<n; i++){
    cout << i+1 << " integer: "; // 프롬프트 출력;
    cin >> array[i]; // 키보드로부터 정수 입력;
  }

  int sum = 0;
  for(int i=0; i<n; i++)
    sum += array[i];
  cout << "average = " << sum/n << endl;

  delete [] array;

}

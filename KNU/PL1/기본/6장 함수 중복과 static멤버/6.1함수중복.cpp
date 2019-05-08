// 중복 험수 조건
// 1. 중복된 함수들의 이름이 동일하여야 한다.
// 2. 중복된 함수들은 매개 변수 타입이나 매개 변수의 개수가 달라야 한다.
// 3. 함수 중복에 리턴 타입은 고려되지 않는다.
#include <iostream>
using namespace std;

// 예제 6-1 big() 함수 중복 연습
int big(int a, int b){
  if(a>b) return a;
  else return b;
}

int big(int a[], int size){
  int res = a[0];
  for(int i=0; i<size; i++)
    if(res < a[i]) res = a[i];
  return res;
}


// 예제 6-2 sum() 함수 중복 연습
int sum(int a, int b){
  int s=0;
  for(int i=a; i<=b; i++)
    s += i;
  return s;
}

int sum(int a){
  int s=0;
  for(int i=0; i<=a; i++)
    s += i;
  return s;
}

int main(){
  int array[5] = {1,9,-2,8,6};
  cout << big(2,3) << endl;
  cout << big(array, 5) << endl;

  cout << sum(3,5) << endl;
  cout << sum(3) << endl;
  cout << sum(100) << endl;
}

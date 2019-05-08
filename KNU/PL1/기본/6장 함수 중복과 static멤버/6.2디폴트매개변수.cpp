// 디폴트 매개 변수에 관한 제역 조건
// 디폴트 매개 변수는 모두 끝 쪽에 몰려 선언되어야 한다.
// void calc(int a, int b = 5, int c, int d = 0) => 컴파일 오류(int b = 5가 int c보다 뒤에 있어야함)
// void sum(int a = 0, int b, int c)

// 규칙: 함수 호출문에 나열된 실인자 값들을 앞에서부터 순서대로 함수의 매개 변수에 전달함.

#include <iostream>
#include <string>
using namespace std;


// 예제 6-3 디폴트 매개 변수를 가진 함수 선언 및 호출
// 원형 선언
void star(int a=5);
void msg(int id, string text = "");

// 함수 구현
void star(int a){
  for(int i=0; i<a; i++)
    cout << "*";
  cout << endl;
}

void msg(int id, string text){
  cout << id << " " << text << endl;
}



// 예제 6-4 디폴트 매개 변수를 가진 함수 만들기 연습
// f();  => 한 줄에 빈칸을 10개 출력한다.
// f("%"); => 한 줄에 %를 10개 출력한다.
// f("@", 5) => 다섯 줄에 @를 10개 출력한다.

// 원형 선언
void f(char c = ' ', int line = 1);

// 함수 구현
void f(char c, int line){
  for(int i=0; i<line; i++){
    for(int j=0; j<10; j++)
      cout << c;
    cout << endl;
  }
}


// 디폴트 매개 변수를 이용하여 중복 함수 간소화 연습
// 25개의 '*' 문자를 한 라인에 출력하는 함수와 n개의 c 문자를 한 라인에 출력하는 함수를 작성하라.
void fillline(int num = 25, char c='*'){
  for(int i=0; i<num; i++)
    cout << c;
  cout << endl;
}


int main(){
  star();
  star(10);

  msg(10);
  msg(10, "Hello");

  f();
  f('%');
  f('@',5);

  fillline();
  fillline('@',10);
}

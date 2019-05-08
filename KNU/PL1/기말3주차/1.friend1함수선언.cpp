// 322p 프렌드 함수 선언

#include<iostream>
using namespace std;

class Rect; // 전방 참조 오류를 막기 위한 선언문
bool equals(Rect r, Rect s);

class Rect{
  int width, height;
public:
  Rect(int width, int height){ this->width = width; this->height = height; }
  friend bool equals(Rect r, Rect s); // friend함수선언
};

bool equals(Rect r, Rect s){    // equals()함수는 friend함수이기 때문에 private 속성을 가진 width와 height에 접근 가능
                                // 외부함수
  if(r.width == s.width && r.height == s.height) return true;
  else return false;
}

int main(){
  Rect a(3,4), b(3,4);
  if(equals(a,b)) cout << "equal" << endl;
  else cout << "not equal" << endl;
}

//325p 다른 클래스 전체를 프렌드로 선언
#include <iostream>
using namespace std;

class Rect;

class RectManager{
public:
  bool equals(Rect r, Rect s);
  void copy(Rect &dest, Rect &src);
};

class Rect{
  int width, height;
public:
  Rect(int width, int height){ this->width = width; this->height = height; }
  friend RectManager;
};

bool RectManager::equals(Rect r, Rect s){ // r과 s가 같으면 true 리턴
  if(r.width == s.width && r.height == r.height) return true;
  else return false;
}

void RectManager::copy(Rect &dest, Rect &src){  // src를 dest에 복사
  dest.width = src.width; dest.height = src.height;
}

int main(){
  Rect a(3,4), b(5,6);
  RectManager man;
  man.copy(b,a);
  if(man.equals(a,b)) cout << "equal" << endl;
  else cout << "not equal" << endl;
}

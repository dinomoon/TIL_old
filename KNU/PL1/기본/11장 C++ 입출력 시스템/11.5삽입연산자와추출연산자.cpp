// 삽입연산자: <<
// 추출연산자: >>

#include <iostream>
#include <string>
using namespace std;

// 예제 11-9 Point 객체를 스트링에 출력하는 << 연산자 작성.
class Point{
  int x, y;
public:
  Point(int x = 0, int y = 0){
    this->x = x;
    this->y = y;
  }
  friend ostream& operator << (ostream& stream, Point a);
};

// << 연산자 함수
ostream& operator << (ostream& stream, Point a){
  stream << "(" << a.x << "," << a.y << ")";
  return stream;
}

// 예제 11-10 Book 클래스를 만들고 Book 객체를 스트림에 출력하는 << 연산자 작성
class Book{
  string title;
  string press;
  string author;
public:
  Book(string title="", string press="", string author=""){
    this->title = title;
    this->press = press;
    this->author = author;
  }
  friend ostream& operator << (ostream& stream, Book b); // freind 선언
};

// << 연산자 함수
ostream& operator << (ostream& stream, Book b){
  stream << b.title << ", " << b.press << ", " << b.author;
  return stream;
}

int main(){
  Point p(3,4); // Point 객체 생성
  cout << p << endl;  // Point 객체 화면 출력

  Point q(1,100), r(2,200); // Point 객체 생성
  cout << q << r << endl; // Point 객체를 연속하여 화면 출력

  Book book("To have or To be", "korea", "Erihifrom");
  cout << book;
}

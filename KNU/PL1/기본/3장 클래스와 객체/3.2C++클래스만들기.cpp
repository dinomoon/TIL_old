// class 키워드를 이용하여 클래스를 선언함.
// Circle 클래스의 경우처럼 클래스는 일반적으로 클래스 선언부와 클래스 구현부로 나누어 작성됨.

/////////////////////////////////////////////
// 선언부
class Circle{
public: // public: 접근지정자, 클래스 외부로부터의 접근을 허용함. 접근지정자의 디폴트는 private이고, 외부 접근이 불가하다.
  int radius; // 멤버 변수
  double getArea(); // 멤버 함수
};
// 구현부 ( 클래스 선언부에 선언된 멤버 함수의 코드를 구현함. )
double Circle::getArea(){ // 같은 이름의 함수가 다른 클래스에 존재할 수 있기 때문에 클래스의 이름과 함께 멤버 함수를 기술한다.
  return 3.14*radius*radius;
}
/////////////////////////////////////////////

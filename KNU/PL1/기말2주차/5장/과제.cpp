#include <iostream>
using namespace std;

class Fraction{
  int x,y; // x: 분자, y: 분모
public:
  Fraction(int a=0,  int b=1) {
		if(b==0) { cout << "y can`t be zero!";  exit(1); }
		x = a; y = b; }
  //////////////////////////////////////////////////////
  int gcd(int a, int b){
    int c;
    while(b!=0){
      c = a % b;
      a = b;
      b = c;
    }
    return a;
  }
  int lcm(int a, int b){
    return a * b / gcd(a,b);
  }
  /////////////////////////////////////////////////////
  Fraction add(Fraction &ob) {
		int bunja = (lcm(y, ob.y)/y)*x + (lcm(y, ob.y)/ob.y)*ob.x;
		int bunmo = lcm(y, ob.y);
		Fraction tmp(bunja, bunmo);
		return tmp;
	}

  Fraction add(int n){
    Fraction ob(n);
    int bunja = ob.y * x + y * ob.x;
    int bunmo = y * ob.y;
    Fraction tmp(bunja, bunmo);
    return tmp;
  }
  ///////////////////////////////////////////////////////
  Fraction sub(Fraction &ob) {
    int bunja = (lcm(y, ob.y)/y)*x - (lcm(y, ob.y)/ob.y)*ob.x;
    int bunmo = lcm(y, ob.y);
    Fraction tmp(bunja, bunmo);
    return tmp;		// 객체 리턴;; (5.3)
  }

  Fraction sub(int n){
    Fraction ob(n);
    int bunja = ob.y * x - y * ob.x;
    int bunmo = y * ob.y;
    Fraction tmp(bunja, bunmo);
    return tmp;
  }
  ///////////////////////////////////////////////////////
  Fraction mul(Fraction &ob) {
    int bunja = x * ob.x;
    int bunmo = y * ob.y;
    Fraction tmp(bunja, bunmo);
    return tmp;		// 객체 리턴;; (5.3)
  }

  Fraction mul(int n){
    Fraction ob(n);
    int bunja = x * ob.x;
    int bunmo = y * ob.y;
    Fraction tmp(bunja, bunmo);
    return tmp;
  }
  ///////////////////////////////////////////////////////
  void show() {
    cout << x;
    if(y!=1)
      cout << "/" << y << endl;
  }
};
  ///////////////////////////////////////////////////////
int main(){
  Fraction ob1(1,10),ob2(1,10000),ob3;
  ob3 = ob1.add(3); // 1/10 + 3
  ob3.show();
  ob3 = ob1.sub(ob2); // 1/10 - 1/10000
  ob3.show();
  Fraction ob4(8, 16);
  ob3 = ob1.sub(ob4); // 1/10 - 8/16
  ob3.show();
  ob3 = ob1.sub(1000); // 1/10 - 1000;
  ob3.show();
  ob3 = ob1.mul(ob4); // 1/10 * 8/16
  ob3.show();
  ob3 = ob1.mul(1000); // 1/10 * 1000;
  ob3.show();
}

/////////////////////////////////////////////////////////
class Frac{
  int num, denom;
public:
  Frac(int a=0, int b=1){ num=a; denom=b; }
  void show(){ cout << "/" << denom << endl; }
  friend operator+(Frac &ob1, Frac &ob2);    // + 연산자가 나오면 실행; ob3 = ob1 + ob2;
  friend Frac operator+(Frac &ob, int n){ Frac t(n,1); return t + ob; }
  friend Frac operator+(int n, Frac &ob){ Frac t(n,1); return t + ob;}
  friend operator-(Frac &ob1, Frac &ob2);
  friend Frac operator-(Frac &ob, int n){ Frac t(n,1); return ob - t; }
  friend Frac operator-(int n, Frac &ob){ Frac t(n,1); return t - ob;}
};

Frac operator+(Frac &ob1, Frac &ob2){
  Frac tmp;
  tmp.num = num * ob.denum + ob.num * denum;
  tmp.denom = denom + ob.denom;
}
Frac operator-(Frac &ob1, Frac &ob2){
  Frac tmp;
  tmp.num = num * ob.denum - ob.num * denum;
  tmp.denom = denom + ob.denom;
}

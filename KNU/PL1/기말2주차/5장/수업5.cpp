#include <iostream>
using namespace std;

class Fraction {
	int num;   // 분자
	int denom; // 분모
public:
	Fraction(int a=0,  int b=1) {
		if(b==0) { cout << "denom can`t be zero!";  exit(1); }
		num =a; denom = b; }
	Fraction add(Fraction &ob) {
		int bunja = ob.denom * num + denom * ob.num;
		int bunmo = denom * ob.denom;
		Fraction tmp(bunja, bunmo);
		return tmp;		// 객체 리턴;; (5.3)
	}
	Fraction add(int n) {
		Fraction ob(n);
		int bunja = ob.denom * num + denom * ob.num;
		int bunmo = denom * ob.denom;
		Fraction tmp(bunja, bunmo);    //객체. 함수내에서 만들어지고 사라진다.
		return tmp;   //객체 값만 전달되고 tmp 자체는 사라진다
	}
	void show() {
		cout << num;
		if(denom!=1)
			cout << "/" << denom;
	}
};

int main(){
	Fraction ob1(1, 3), ob2(1, 3), ob3;
	ob3 = ob1.add(ob2);

	cout << "ob3: ";
	ob3.show();
	cout << endl;

	cout << "ob1: ";
	ob1.show();
	cout << endl;
	return 0;
}

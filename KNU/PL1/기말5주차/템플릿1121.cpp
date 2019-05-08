#include <iostream>
using namespace std;

template <typename X>
void myswap(X &a, X &b){
	X t= a;
	a = b ;
	b = t;
}

void myswap(int& a, int& b){ // 타입을 명시하면 명시한 것이 우선이 된다.
	cout << "*" << endl;
	int t=a; a=b; b=t;
}

template <typename X2>
X2 bigger(X2 &a, X2 &b)
{
	return (a>b)? a:b;
}

int main(){
	int a=3,  b=4;
	cout << a << " " << b << endl;
	myswap(a,b);
	cout << a << " " << b << endl;

	double f=3.1, g=2.3;
	cout << f << " " << g << endl;
	myswap(f,g);
	cout << f << " " << g << endl;

	cout << a << " " << b << endl;
	cout << bigger(a,b) << endl;
	cout << f << " " << g << endl;
	cout << bigger(f,g) << endl;

	char ch1 = 'd', ch2='b';  //'d'와 'b'를 직접 넣으면 모호하다며 오류가 뜬다
  cout << ch1 << " " << ch2 << endl;
	cout << "**" << bigger(ch1, ch2) << endl;  //(따로 명시 없이 컴파일러가 문자를 아스키 코드 이진수로 마음대로 바꾸는데 제한이 있다)
	return 0;
}

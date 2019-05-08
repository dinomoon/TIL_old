#include <iostream>

using namespace std;


class Frac{
	int num; int denom;
public:
	Frac(int a=0, int b=1) : num(a), denom(b) {}
	friend ostream& operator<<(ostream& stream, Frac ob){
		stream << ob.num << "/" << ob.denom << endl;
		return stream;
	}
};

int main(){
	Frac ob(3,5);
	cout << ob << endl;
}

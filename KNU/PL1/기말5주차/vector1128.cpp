#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int ex1(){
	vector<int> v;
	for(int i=0; i<10; i++)
		v.push_back(i);

	for(int i=0; i<v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
}

int ex2(){
	vector<int> v;
	for(int i=0; i<10; i++)
		v.push_back(i);

	v.at(2) = 77; // 2번 위치에 77을 넣어라.
	for(int i=0; i<v.size(); i++)
		cout << v[i] << " ";

	cout << endl;

	return 0;
}

int ex3(){
	vector<int> v;
	int n;
	srand( (unsigned) time(NULL) );

	for(int i=0; i<10; i++) {
		n = rand()%101;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	for(int i=0; i<v.size(); i++)
		cout << v[i] << " ";

	cout << endl;

	return 0;
}

class Frac{
	int num; int denom;
public:
	Frac(int a=0, int b=1) : num(a), denom(b) {}
	friend ostream& operator<<(ostream& stream, Frac ob)
	{
		stream << ob.num << "/" << ob.denom << endl;
		return stream;
	}
};

int ex4(){
	Frac ob(3,5);
	cout << ob << endl;

	return 0;
}

int main(){
	// ex1();
	// ex2();
	// ex3();
	ex4();
}

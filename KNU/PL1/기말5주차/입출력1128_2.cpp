#include <iostream>
#include <fstream>

using namespace std;

class Frac{
	int num; int denom;
public:
	Frac(int a=0, int b=1) : num(a), denom(b) {}
	friend ostream& operator<<(ostream& stream, Frac ob){
		if(ob.denom != 1)
			stream << ob.num << "/" << ob.denom << endl;
		else
			stream << ob.num << endl;
		return stream;
	}
};

int main(){
	Frac ob(3,1);
	cout << ob << endl;

  ofstream fout("a.txt");
	if(!fout.is_open()) {
		cout << "파일이 없습니다" << endl;
		return -1;
	}
	for(int i=0; i<10; i++)
		fout << i << endl;

  fout.close();


    char str[10];

  	ofstream fout2("b.txt", ios::binary);
  	if(!fout2.is_open()) {
  		cout << "파일이 없습니다" << endl;
  		return -1;
  	}

  	for(int i=1000; i<1005; i++) {
  		sprintf(str, "%d", i);
  		fout2.write(str, sizeof(str));
  	}

  	fout2.close();
}

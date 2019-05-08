// 함수 중복;;

#include <iostream>
using namespace std;
int sum(int a, int b){ return a+b; }
double sum(double a, double b){ return a+b; }
string sum(string a, string b){ return a+b; }

int main(){
  int i = 3, j = 3;
  double f=3.1, g=2.4;
  string s1 = "Hello ", s2 = "World";
  cout << sum(i,j) << endl;
  cout << sum(f,g) << endl;
  cout << sum(s1,s2) << endl;
}

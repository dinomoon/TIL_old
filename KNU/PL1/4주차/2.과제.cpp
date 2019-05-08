// c(0,0) 과 c(3,4) 사이의 거리를 구하라.

#include<iostream>
#include<cmath>
using namespace std;

struct point{
  int a;
  int b;
};
struct point2{
  int c;
  int d;
};

int main(){
  int x_distance, y_distance;
  double result;
  struct point c1;
  c1.a = 0;
  c1.b = 0;

  struct point2 c2;
  c2.c = 3;
  c2.d = 4;

  x_distance = c2.c - c1.a;
  y_distance = c2.d - c1.b;

  result = sqrt(pow(x_distance,2)+pow(y_distance,2));
  cout << result << endl;

  return 0;
}

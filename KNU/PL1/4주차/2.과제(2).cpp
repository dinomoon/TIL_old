#include<iostream>
#include<cmath>
using namespace std;
class coord{
private:
  int x;
  int y;
public:
  coord(int a = 0, int b = 0) :x(a), y(b) {}
  int x_distance(int a, int b){
    x = a; y = b;
    return pow(x-y, 2);
  }
  int y_distance(int c, int d){
    x = c; y = d;
    return (c-d) * (c-d);
  }
};

int main(){
  int x_distance, y_distance;
  coord c1;
  x_distance = c1.x_distance(0,3);
  coord c2;
  y_distance = c2.y_distance(0,4);

  cout << sqrt(x_distance + y_distance) <<endl;

  return 0;

}

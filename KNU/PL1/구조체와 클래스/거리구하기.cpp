#include <iostream>
#include <cmath>
using namespace std;

class coord{
private:
  int x, y;
public:
  coord(int a, int b){ x = a; y = b; }
  double getDistance(coord k);
};

double coord::getDistance(coord k){
  int x_distance = abs(x - k.x);
  int y_distance = abs(y - k.y);
  return sqrt(pow(x_distance,2) + pow(y_distance,2));
}

int main(){
  coord you(0,0);
  coord you2(3,4);

  cout << you.getDistance(you2) << endl;
}

#include<iostream>
using namespace std;

class Circle{
private:
  int radius;
public:
  Circle(){ radius = 1; }
  Circle(int r){ radius = r; }
  void SetRadius(int r){ radius =r; }
  double getArea();
};

double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main(){
  Circle donutArray[3];

  for(int i=0; i<3; i++){
    donutArray[i].SetRadius(i+1);
    cout << donutArray[i].getArea() << endl;
  }


  Circle *p;
  p = donutArray;
  for(int i=0; i<3; i++){
    cout << p -> getArea() << endl;
    p++;
  }
}

#include <iostream>

using namespace std;

struct student{
  int id;
  char *name;
  float percentage;

  void Show();
};

void student :: Show(){
  cout << "id: " << id << endl;
  cout << "name: " << name << endl;
  cout << "percentage: " << percentage << endl;
}

int main(){
  student s = {1, "dinomun", 90.5};

  s.Show();
  return 0;
}

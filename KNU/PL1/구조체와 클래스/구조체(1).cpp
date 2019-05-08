#include <iostream>

using namespace std;

struct student{
  int id;
  char *name;
  float percentage;
};

int main(){
  student s = {1, "dinomun", 90.5};

  cout << "id: " << s.id << endl;
  cout << "name: " << s.name << endl;
  cout << "percentage: " << s.percentage << endl;
  return 0;
}

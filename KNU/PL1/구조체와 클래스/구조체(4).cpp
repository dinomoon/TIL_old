#include <iostream>

using namespace std;

struct student{
private:
  int id;
  char *name;
  float percentage;
public:
  void Show();
  void SetInfo(int _id, char *_name, float _percentage);
};

void student :: Show(){
  cout << "id: " << id << endl;
  cout << "name: " << name << endl;
  cout << "percentage: " << percentage << endl;
}

void student :: SetInfo(int _id, char *_name, float _percentage)
{
  id = _id;
  name = _name;
  percentage = _percentage;
}

int main(){
  student s;

  s.SetInfo(1, "dinomun", 90.5);
  s.Show();
  return 0;
}

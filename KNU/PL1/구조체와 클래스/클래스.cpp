// 구조체와 클래스의 차이점?
// 기본 접근 제한자의 차이!
// 구조체는 기본 접근 제한자가 public
// 클래스는 기본 접근 제한자가 private
#include <iostream>

using namespace std;

class student {
private:
  char *name;
  int age;
  char *hobby;
public:
  void ShowInfo();
  void SetInfo(char *_name, int _age, char *_hobby);
  void Study();
  void Sleep();
};

void student :: ShowInfo()
{
  cout << "name: " << name << ", age: " << age << ", hobby: " << hobby << endl;
}

void student :: SetInfo(char *_name, int _age, char *_hobby)
{
  name = _name;
  age = _age;
  hobby = _hobby;
}

void student :: Study()
{
  cout << "Study!" << endl;
}

void student :: Sleep()
{
  cout << "Sleep!" << endl;
}

int main(){
  student stu;
  stu.SetInfo("dinomun", 25, "coding");
  stu.ShowInfo();

  stu.Study();
  stu.Sleep();

  return 0;
}

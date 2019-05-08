#include<iostream>
#include<string>
using namespace std;

int main(){
  string str = "I love ";
  str.append("C++.");
  cout << str << endl;

  // string 객체 생성;
  string str2; // 빈 문자열을 가진 스트링 객체;
  string address("Earth korea suwon"); // 문자열 리터럴로 초기화;
  string copyAddress(address); // address를 복사한 copyAddress 생성;

  // string 객체가 가진 문자열 출력
  cout << address << endl;
  cout << copyAddress << endl;

  // string 객체의 동적 생성;
  string *p = new string("C++"); // 스트링 객체 동적 생성;
  cout << *p; // "C++" 출력;
  p -> append(" Great!"); // p가 가리키는 스트링이 "C++ Great!" 가 됌;
  cout << *p << endl;
  delete p;

  // string 배열과 문자열 키 입력 응용
  // 문자열을 입력받아 사전 순으로 가장 뒤에 나오는 문자열을 출력하기.
  string names[5];
  for(int i=0; i<5; i++){
    cout << "name >> ";
    getline(cin, names[i], '\n');
  }

  string latter = names[0];
  for(int i=1; i<5; i++){
    if(latter < names[i])
      latter = names[i];
  }
  cout << latter << endl;
}

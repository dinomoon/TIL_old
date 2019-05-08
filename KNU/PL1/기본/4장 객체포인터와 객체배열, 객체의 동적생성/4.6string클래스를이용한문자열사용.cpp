#include <iostream>
#include <string>
using namespace std;

// 예제 4-11 string 클래스를 이용한 문자열 생성 및 출력.
int ex1(){
  // 스트링 생성
  string str; // 빈 문자열을 가진 스트링 객체 생성
  string address("Suwon");
  string copyAddress(address); // address의 문자열을 복사한 스트링 객체 생성

  char text[] = {'L','o','v','e',' ','C','+','+','\n'}; // C-스트링
  string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성

  // 스트링 출력
  cout << str << endl;  // 빈 스트링. 아무 값도 출력하지 않음.
  cout << address << endl;
  cout << copyAddress << endl;
  cout << title << endl;
}

// string 배열과 문자열 키 입력 응용
int ex2(){
  string names[5];  // string 배열 선언

  for(int i=0; i<5; i++){
    cout << "name: " ;
    getline(cin, names[i], '\n');
  }

  string latter = names[0];
  for(int i=0; i<5; i++){
    if(latter < names[i]) // names[i]가 latter보다 뒤에 온다면
      latter = names[i]; // latter 문자열 변경
  }

  cout << "lattest: " << latter << endl;
}

// 195p 문자열 다루기
// 문자열 치환
int ex3(){
  string a = "Java", b = "C++";
  a = b;  // a = "C++"이 된다. a는 b를 복사한 문자열을 가진다.
  cout << a << endl;
}

// 문자열 비교( compare()함수 사용 또는 직접 연산자로 비교 )
int ex4(){
  string name = "Kitae";
  string name2 = "Kito";

  // 방법1
  int res = name.compare(name2);  // name과 name2를 비교한다.
  if(res == 0)
    cout << "same";
  else if(res < 0)
    cout << name << " < " << name2 << endl;  // name이 앞에 옴
  else
    cout << name2 << " < " << name << endl; // name이 뒤에 옴

  // 방법2
  if(name == name2)
    cout << "same";
  else if(name < name2)
    cout << name << " < " << name2 << endl;
  else
    cout << name2 << " < " << name << endl;
}

// 문자열 연결( append()함수 사용 또는 +,+=연산자 이용)
int ex5(){
  string a("I");
  a.append(" love you");
  cout << a << endl;

  string b("I love C++");
  string c(".");
  string d;
  d = b + c;  // d = "I love C++."
  cout << d << endl;

  d += c; // d = "I love C++.."
  cout << d << endl;

  d += "."; // d = "I love C++..."
  cout << d << endl;
}

// 문자열 삽입( insert()함수 이용 )
int ex6(){
  string a("I love C++");
  a.insert(2, "really ");
  cout << a << endl;  // a = "I really love C++"

  a.replace(2,11,"study"); // a의 인덱스 2부터 11개의 문자("really love")를 "study"로 교체
  cout << a << endl; // a = "I study C++"
}

// 문자열 길이( length()함수와 size()함수 이용 )
int ex7(){
  string a("I love C++");
  int length = a.length();
  int size = a.size();
  cout << length << endl;
  cout << size << endl;
}

// 문자열 삭제( erase()는 일부를 삭제하고 clear()는 완전히 삭제한다. )
int ex8(){
  string a("I love C++");
  a.erase(0,2); // 처음부터 2개의 문자 삭제
  cout << a << endl;
  a.clear();
  cout << a << endl;
}

// 서브스트링( substr()함수를 사용하면 문자열에서 일부분을 발췌한 문자열(서브스트링)을 얻을 수 있다.)
int ex9(){
  string b = "I love C++";
  string c = b.substr(2,4); // b의 인덱스 2에서부터 4개의 문자 리턴. c = "love"
  cout << c << endl;
  string d = b.substr(2); // b의 인덱스 2에서 끝까지 문자열 리턴. d = "love C++"
  cout << d << endl;
}

// 문자열 검색 ( find()는 문자열에서 특정 문자나 문자열을 발견하면 첫 번째 인덱스를 리턴한다. 발견하지 못하면 -1을 리턴)
int ex10(){
  string e = "I love love C++";
  int index = e.find("love"); // e에서 "love" 검색. 인덱스 2 리턴;
  cout << index << endl;
  index = e.find("love", index+1); // e의 인덱스 3부터 "love" 검색. 인덱스 7리턴;
  cout << index << endl;
  index = e.find("C#"); // e에서 "C#" 찾을 수 업음. -1 리턴;
  cout << index << endl;
  index = e.find("v", 7); // e의 인덱스 7부터 "v" 검색. 인덱스 9리턴;
  cout << index << endl;
}
int main(){
  ex10();
}

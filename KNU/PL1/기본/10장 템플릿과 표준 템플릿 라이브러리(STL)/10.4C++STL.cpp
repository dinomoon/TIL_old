// 표준 템플릿 라이브러리(Standard Template Library, STL)는
// 템플릿으로 작성된 많은 제네릭 클래스와 함수 라이브러리

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 예제 10-9 vector 컨테이너 활용
// vector 클래스를 이용하여 정수 벡터를 생성하고 사용하는 간단한 사례를 보인다.
int ex1(){
  vector<int> v;  // 정수만 삽입 가능한 벡터 생성

  v.push_back(10);  // 벡터에 정수 10 삽입
  v.push_back(20);  // 벡터에 정수 20 삽입
  v.push_back(30);  // 벡터에 정수 30 삽입

  for(int i=0; i<v.size(); i++) // 벡터의 모든 원소 출력
    cout << v[i] << " ";  // v[i]는 벡터의 i번째 원소
  cout << endl;

  v[0] = 24;  // 벡터의 첫 번째 원소를 24으로 변경
  int m = v[2]; // m에 30저장
  v.at(2) = 99; // 벡터의 3번째 원소를 99로 변경

  for(int i=0; i<v.size(); i++) // 벡터의 모든 원소 출력
    cout << v[i] << " ";  // v[i]는 벡터의 i 번째 원소
  cout << endl;
}

// 예제 10-10 문자열을 저장하는 벡터 만들기 연습
// string 타입의 vector를 이용하여 문자열을 저장하는 벡터를 만들고,
// 5개의 이름을 입력받아 사전에서 가장 뒤에 나오는 이름을 출력하라.
int ex2(){
  vector<string> sv;  // 문자열 벡터 생성
  string name;  // 사전에서 가장 뒤에 나오는 이름을 저장하기 위한 변수

  cout << "what is the name5? " << endl;
  for(int i=0; i<5; i++){ // 한 줄에 한 개씩 5개의 이름을 입력받는다.
    cout << i+1 << " >> ";
    getline(cin, name);
    sv.push_back(name); // 이름을 벡터에 삽입
  }
  name = sv.at(0);  // 벡터의 첫 번째 이름
  for(int i=0; i<sv.size(); i++){
    if(name < sv[i])  // sv[i]의 문자열이 name보다 사전에서 뒤에 나옴
      name = sv[i]; // name을 sv[i]의 문자열로 변경
  }
  cout << "the last name: " << name << endl;
}

int main(){
  ex2();
}

// <<와 >>를 이용한 간단한 텍스트 파일 입출력
// 1. 파일 열기 ofstream fout("song.txt")
// 2. 파일 열기 성공 검사 if(!fout.is_open()){}
// 3. << 연산자를 이용한 파일 쓰기 fout << age << endl;
// 4. 파일 닫기 fout.close();

// 예제 12-1 키보드로부터 입력 받아 텍스트 파일 저장하기
#include<iostream>
#include<fstream>
using namespace std;

int main(){
  char name[10], major[20];
  int grade;

  // 키보드로부터 읽기
  cout << "name >> ";
  cin >> name;
  cout << "grade >> ";
  cin >> grade;
  cout << "major >> ";
  cin >> major;

  ofstream fout("student.txt"); // 파일 열기
  if(!fout.is_open()){  // 파일 열기 성공 검사
    cout << "fail" ;
    return 0;
  }

  fout << name << endl; // 파일 쓰기
  fout << grade << endl;
  fout << major << endl;

  fout.close(); // 파일 닫기
}

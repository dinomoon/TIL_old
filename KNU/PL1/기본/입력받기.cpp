#include<iostream>
using namespace std;

int main(){
  char name[11]; // 한글은 5글자, 영어는 10글자까지 저장가능;
  cout << "What is your name? ";
  cin >> name;
  cout << "Nice to meet you " << name <<endl; // cin 으로 문자열을 입력받으면 띄어쓰기까지 출력이 안됌!
}

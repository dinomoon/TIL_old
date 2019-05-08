//  cin.getline()을 이용하여 공백이 포함된 문자열 입력

#include <iostream>
using namespace std;

int main(){
  char name[11];
  cout << "What is your name? ";
  cin.getline(name, 11, '\n');    // <Enter>키가 입력될 때까지 최대 10개의 문자입력가능
  cout << "Nice to meet you " << name << endl;
}

//  string클래스를 이용하려 입력받기

#include <iostream>
#include <string>
using namespace std;

int main(){
  string song("Falling in love with you"); // 문자열 song;
  string elvis("Elvis Presley"); // 문자열 elvis
  string singer;

  cout << "Who is the singer of the song " + song << "?";

  getline(cin,singer);
  if(singer == elvis)
    cout << "you`re right!" ;
  else
    cout << "That is not the answer";
}

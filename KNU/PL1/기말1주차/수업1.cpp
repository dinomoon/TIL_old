// 200p;
// 문자열 처리 응용 - 덧셈 문자열을 입력받아 덧셈 실행;
#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  getline(cin, s, '\n');
  int sum = 0;
  int startindex = 0;
  while(true){
      int Findex = s.find("+", startindex);
      if(Findex == -1){
        int count = s.length() - startindex;
        string part = s.substr(startindex,count);
        sum += stoi(part);
        cout << part << " " << sum << endl;
        break;
      }

      int count = Findex - startindex;
      string part = s.substr(startindex,count);
      sum += stoi(part);
      cout << part << " " << sum << endl;
      startindex = Findex + 1;

  }

  return 0;
}

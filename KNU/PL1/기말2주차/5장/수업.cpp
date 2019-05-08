// 복사 생성자;;

#include <iostream>
using namespace std;

class arr {
  int *a;
  int num;
public:
  arr(int n){
    num = n;
    a = new int[n];
    for(int i=0; i<n; i++)
      a[i] = i;
  }

  arr(arr &ob){   // 복사 생성자;;
    num = ob.num;
    a = new int[num];
    for(int i=0; i<num; i++)
      a[i] = ob.a[i];
  }

  ~arr() { delete [] a; }

  void show(){
    for(int i=0; i<num; i++)
      cout << a[i] << " " ;
    cout<<endl;
  }

};
int main(){
  arr b(5), c(b);
  b.show();
  c.show();
  arr d(6), e(d);
  e.show();
}

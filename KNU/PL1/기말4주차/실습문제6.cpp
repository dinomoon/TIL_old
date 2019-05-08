#include <iostream>
using namespace std;

class Matrix{
  int element[2][2];
public:
  Matrix(int x=0, int y=0, int z=0, int w=0){
    element[0][0] = x; element[0][1] = y;
    element[1][0] = z; element[1][1] = w;
  }
  void show();
  Matrix operator+(const Matrix& ob){
    Matrix tmp;
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
        tmp.element[i][j] = element[i][j] + ob.element[i][j];
    return tmp;
  }
  Matrix& operator+=(const Matrix& ob){
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
        element[i][j] = element[i][j] + ob.element[i][j];
    return *this;
  }
  bool operator==(const Matrix& ob){
    bool result = true;
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
        if(element[i][j] != ob.element[i][j])
          return false;
    return result;
  }
};

void Matrix::show(){
  cout << "Matrix = { ";
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
        cout << element[i][j] << " ";
    cout << "}" << endl;
}

int main(){
  Matrix a(1,2,3,4), b(2,3,4,5), c;
  c = a + b;
  a += b;
  a.show(), b.show(), c.show();
  if(a==c)
    cout << "a and c are the same" << endl;
}

#include <iostream>
using namespace std;
void swap(int a, int b){ int t; t = a; a = b; b = t; }
void swap(double a, double b){ double t; t = a; a = b; b = t; }
void swap(char a, char b){ char t; t = a; a = b; b = t; }
void swap(Matrix a, Matrix b){ Matrix t = a; a = b; b = t; }

template < typename X >
void swap(X& a, X& b){
  X t;
  t = a;
  a = b;
  b = t;
}

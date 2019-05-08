class point{
  int *n;
  int count;
public:
  point(int a = 1) { count = a; n = new int[a]; }
  ~point() {delete [] n;}
  void insert(){
    for(int i = 0; i<count; i++)
      n[i] = i + 1;
  }
  void show()
  {
    for(int i = 0; i<count; i++)
      cout << n[i] << endl;
  }
};

int main(){
  array a(7);
  a.insert(); a.show();
  return 0;
}

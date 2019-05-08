함수 중복으로 인한 모호성은 다음 3가지 종류가 있다.
1. 형 변환으로 인한 모호성
2. 참조 매개 변수로 인한 모호성
3. 디폴트 매개 변수로 인한 모호성

1.
double square(double a);
square(3); int 타입의 매개 변수 전달. 컴파일 오류 발생하지 않음!
char -> int -> long -> float -> double : ->의 왼쪽에 있는 타입이 오른쪽에 있는 어떤 타입으로도 자동 형 변환!

float square(float a);
double square(double);

square(3); 정수 3을 float 타입으로 형변환할지 double타입으로 형변환할지 모호하기 때문에 컴파일 오류!

2.
int add(int a, int b);
int add(int a, int &b);

add(10, 20); 어떤 함수를 호출할 지 모호하기 때문에 컴파일 오류.

3.
void msg(int id);
void msg(int id, string s="");

msg(6); 어떤 함수를 호출할 지 모호하기 때문에 컴파일 오류.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {       // 구조체 정의
  char name[20];      // 구조체 멤버1
  int age;            // 구조체 멤버2
  char address[100];  // 구조체 멤버3
} p1;               //구조체를 정의하는 동시에 변수 p1 선언

int main()
{
  // 점으로 구조체 멤버에 접근하여 값 할당
  strcpy(p1.name, "Moon");
  p1.age = 25;
  strcpy(p1.address, "Suwon");

  // 점으로 구조체 멤버에 접근하여 값 출력
  printf("name: %s\n", p1.name);
  printf("age: %d\n", p1.age);
  printf("address: %s\n", p1.address);

  return 0;
}

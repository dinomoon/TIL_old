#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define MAX 10
// 번호 이름 과목1(0~100) 과목2(0~100) 합계 (순위 순서대로 출력..)(10만~20만)
struct score{
  int no;
  char name[4];
  int subject1;
  int subject2;
  int sum;
  int rank;
};

int main(){

  int i, j, n;
  struct score students[MAX*2];

  srand((unsigned)time(NULL));

  n = MAX + rand()%(MAX+1);


  for(i=0; i<n; i++){
    students[i].no = i+1;
    for(j=0; j<3; j++)
      students[i].name[j] = 'a' + rand()%26;
    students[i].name[j] = '\0';                   // 무슨 의미..? 문자열의 끝! (NULL문자);
    students[i].subject1 = rand()%101;
    students[i].subject2 = rand()%101;
    students[i].sum = students[i].subject1 + students[i].subject2;
    students[i].rank = 1;
  }

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      if(students[i].sum < students[j].sum)
        students[i].rank++;

printf("no name subject1 subject2 sum rank\n");
  for(j=1; j<n+1; j++)
    for(i=0; i<n; i++){
      // 등수 순서대로 출력.
      if(students[i].rank == j)
      printf("%d %4s %8d %6d %7d %d\n",
              students[i].no, students[i].name, students[i].subject1,
              students[i].subject2, students[i].sum, students[i].rank);
  }


  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10
// fwrite(&n, sizeof(n), 1, fp)
// 매개변수 1. 입력할 값이 저장된 변수의 주소
// 매개변수 2. 자료형의 크기
// 매개변수 3. 반복 입력할 횟수
// 매개변수 4. 대상이 되는 파일포인터
int main(){
  FILE *fp;
  int a[MAX];
  int i;

  srand((unsigned)time(NULL));
  for(i=0; i<MAX; i++)
    a[i] = rand()%101;

  fp = fopen("binout.bin","wb");  //이진 파일은 쓸 때 w가 아니라 wb임!!

  //for(i=0; i<MAX; i++)
    //fwrite(&a[i], sizeof(a[i]), 1, fp);
  fwrite(a, sizeof(a), 1, fp); //위의 2줄과 같음.

  fclose(fp);

  for(i=0; i<MAX; i++)  // 이건 왜 있는 거지..?
    a[i] = 0;

  fp = fopen("binout.bin", "rb");

  //for(i=0; i<MAX; i++)
    //fread(&a[i], sizeof(a[i]), 1, fp);
  fread(a, sizeof(a), 1, fp); //위의 2줄과 같음.

  for(i=0; i<MAX; i++)
    printf("%d ", a[i]);
  fclose(fp);
}

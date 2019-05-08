#include<stdio.h>

int main(){

  FILE *fp; //파일 포인터 설정
  fp = fopen("text.txt","w"); //열기
  fprintf(fp,"Hello world!"); //사용
  fclose(fp); //닫기

  return 0;
}

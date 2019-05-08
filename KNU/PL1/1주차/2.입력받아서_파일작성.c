#include<stdio.h>

int main(){
  FILE *fp; //파일포인터
  char filename[30];
  int i, num;
  printf("what is the filename?\n");
  scanf("%s", &filename);

  fp = fopen(filename, "w");  //열기

  printf("what is the number?\n");
  scanf("%d", &num);

  for(i=0;i<num;i++)
    fprintf(fp,"%d\n",i); //사용

  fclose(fp); //닫기

  return 0;
}

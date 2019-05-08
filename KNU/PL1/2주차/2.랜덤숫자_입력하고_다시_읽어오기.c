#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  FILE *fp;
  int i,n;
  srand((unsigned)time(NULL));  //랜덤 초기화

  fp = fopen("result.txt","w");
  n = 5+rand()%2; //n: 5~6
  for(i=0; i<n; i++)
    fprintf(fp, "%d ", rand()%101);
  fclose(fp);

  fp = fopen("result.txt","r");
  while(1){
    fscanf(fp, "%d", &n);
    if(feof(fp)) break;  //eof: end of file
    printf("%d ", n);
  }
  fclose(fp);

  return 0;
}

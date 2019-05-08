#include<stdio.h>

int main(){
  FILE *fp;
  int i,n;

  fp = fopen("result1.txt","w");
  for(i=0; i<10; i++)
    fprintf(fp, "%d\n", i);

  fclose(fp);


  fp = fopen("result1.txt","r"); //r: read
  for(i=0; i<10; i++){
    fscanf(fp, "%d", &n); //result.txt에 있는 내용 하나씩 n에 저장.
    printf("%d\n", n);
  }

  fclose(fp);
  return 0;
}

// 데이터 수가 100~200개인 a.bin, b.bin 2진파일을 생성한다.
// a.bin, b.bin 을 읽어들여 a.bin과 b.bin을 합친 c.txt파일을 생성한다.
// 데이터의 범위는 -100 ~ 100으로 한다.
// 단, 배열사용불가, 0이상의 숫자만 c.txt에 저장.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  FILE *fp1, *fp2, *fp3;
  int i, n, count;

  srand((unsigned)time(NULL));
  fp1 = fopen("a.bin", "wb");

  count = 100 + rand()%101;         //데이터 갯수 설정
  for(i=0; i<count; i++){
    n = rand()%201 -100;            //데이터 범위 설정
    fwrite(&n, sizeof(n), 1, fp1);
  }
  fclose(fp1);

  fp2 = fopen("b.bin","wb");
  count = 100 + rand()%101;         //데이터 갯수 설정
  for(i=0; i<count; i++){
    n = rand()%201 - 100;           //데이터 범위 설정
    fwrite(&n, sizeof(n), 1, fp2);
  }
  fclose(fp2);

  fp3 = fopen("c.txt","w");
  fp1 = fopen("a.bin","rb");

  while(1){
    fread(&n, sizeof(n), 1, fp1);
    if(feof(fp1)) break;
    if(n>=0)
      fprintf(fp3,"%d ",n);
  }
  fclose(fp1);

  fp2 = fopen("b.bin","rb");

  while(1){
    fread(&n, sizeof(n), 1, fp2);
    if(feof(fp2)) break;
    if(n>=0)
      fprintf(fp3,"%d ",n);
  }
  fclose(fp2);
}

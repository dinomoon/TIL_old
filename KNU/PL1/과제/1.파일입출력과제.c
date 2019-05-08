// 문제: 0~1000사이의 정수를 200~220개 랜덤 생성하여 a.bin이라는 2진 파일에 적는다.
// 이진 파일에 저장된 값을 읽어 들여 다음과 같이 화면에 출력한다.
// 가장 많이 있는 수가 포함된 수들을 b.txt에 저장하시오.;

// 예를 들어 11 31 0 111 59 와 같은 데이터일 경우
// 화면 출력 내용
// 0:1개
// 1:6개
// 2:0개
// 3:1개
// 4:0개
// 5:1개
// 6:0개
// 7:0개
// 8:0개
// 9:1개

// b.txt의 내용
// 11
// 31
// 111

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  FILE *fp1, *fp2;
  int i, i2, count, k, max, max2;
  int n, n2, n3, nam, nam2, nam3;
  int array[10] = {1,2,3,4,5,6,7,8,9};
  int check[10] = {0,};
  int check2[220] = {0,};

  srand((unsigned)time(NULL));

  count = 200 + rand()%21;
  fp1 = fopen("a.bin","wb");
  for(i=0; i<count; i++){
    n = rand()%1001;
    fwrite(&n,sizeof(n),1,fp1);
    check2[i] = n;
  }
  fclose(fp1);

  fp1 = fopen("a.bin","rb");
  for(i=0; i<count; i++){
    fread(&n,sizeof(n),1,fp1);
    while(n>0){
      nam=n%10;
      for(k=0; k<10; k++){
        if(nam==array[k])
          check[k]=check[k]+1;
      }
      n = n/10;
    }
  }

  fclose(fp1);

  for(k=0; k<10; k++){
      printf("%d: %d개\n", k, check[k]);
  }

  max = 0;
  for(i=0; i<9; i++){
    if(check[i]>check[max])
      max = i;
    // 가장 많이 있는 수가 2개일 경우를 위해 만듬.
    if(check[i]==check[max])
      max2 = i;
  }

  fp1 = fopen("a.bin","rb");
  fp2 = fopen("b.txt","w");

  for(i=0; i<count; i++){
    fread(&n,sizeof(n),2,fp1);
    for(i2=0; i2<1; i++){
      nam = n%10;
      if(nam == max){
        fprintf(fp2,"%d\n", n);
        break;
      }
      else{
        n2 = n/10;
        if(n2!=0)
          nam2 = n2%10;
        else
          break;
      }

      if(nam2 == max){
        fprintf(fp2, "%d\n", n);
        break;
      }
      else{
        n3 = n2/10;
        if(n3!=0)
          nam3 = n3%10;
        else
          break;
      }

      if(nam3 == max){
        fprintf(fp2, "%d\n", n);
        break;
      }
      else
        break;
    }
  }

  fclose(fp1);
  fclose(fp2);

  // 가장 많이 있는 수가 2개일 경우를 위해 만듬.
  if(max!= max2){
    fp1 = fopen("a.bin","rb");
    fp2 = fopen("b.txt","a");
    fprintf(fp2,"----------------\n");

    for(i=0; i<count; i++){
      fread(&n,sizeof(n),2,fp1);
      for(i2=0; i2<1; i++){
        nam = n%10;
        if(nam == max2){
          fprintf(fp2,"%d\n", n);
          break;
        }
        else{
          n2 = n/10;
          if(n2!=0)
            nam2 = n2%10;
          else
            break;
        }

        if(nam2 == max2){
          fprintf(fp2, "%d\n", n);
          break;
        }
        else{
          n3 = n2/10;
          if(n3!=0)
            nam3 = n3%10;
          else
            break;
        }

        if(nam3 == max2){
          fprintf(fp2, "%d\n", n);
          break;
        }
        else
          break;
      }
    }
    fclose(fp1);
    fclose(fp2);
  }
  return 0;
}

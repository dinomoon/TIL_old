#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  FILE *fp, *fp1;
  int i, j;
  int n, mok, nam, max;
  int c[10] = {0};
  int data[220];

  srand((unsigned)time(NULL));

  fp = fopen("a.bin", "wb");

  for(i=0; i<10; i++){
    n = rand()%1001;
    fwrite(&n, sizeof(n), 1, fp);
  }

//    printf("%d ", rand()%1001); //0~1000

  fclose(fp);

  fp = fopen("a.bin", "rb");
  fp1 = fopen("b.txt", "w");

  for(i=0; i<10; i++){
    fread(&mok, sizeof(mok), 1, fp);
    printf("%d ", mok);
    do{
      nam = mok % 10;
      c[nam]++;
      mok = mok / 10;
    } while(mok!=0);
  }
  fclose(fp);

  printf("\n");
  max = c[0];
  for(i=0; i<10; i++)
    if(c[i] > max)
      max = c[i];

  fp1 =fopen("b.txt","w");

  printf("maximum number\n");
  for(i=0; i<10; i++)         // maximum number 여러개일 때 기능.
    if(c[i]==max){
      printf("c[%d]\n",i);
      fprintf(fp1, "%d:\n", i);

      fp = fopen("a.bin", "rb");

      for(j=0; j<10; j++){
        fread(&mok, sizeof(mok), 1, fp);
        do{
          nam = mok % 10;
          if(nam==i){                     // i? max? ?????
            fprintf(fp1, "%d \n", mok);
            break;
          }
          mok = mok / 10;
        } while(mok!=0);
      }
    }

fclose(fp1);
//    printf("%d ", rand()%1001); //0~1000


  for(i=0; i<10; i++)
    printf("%d: %d\n",i, c[i]);
  return 0;
}

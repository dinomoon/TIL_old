#include <stdio.h>

int main(void)
{
	int decimal;
  int binary[20] = {0,};
  int position=0;

  printf("enter the decimal \n");
  scanf("%d",&decimal);
  while(1){
    binary[position] = decimal%2;
    decimal = decimal/2;
    position++;

    if(decimal==0)
      break;
  }

  for(int i=position-1; i>=0; i--)
    printf("%d",binary[i]);

  printf("\n");
  return 0;
}

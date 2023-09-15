#include<stdio.h>
void fibonacci(int trn)
{ int a=0,b=1;
   int c;
   while(trn>2)
   {
    c=a+b;
    printf("%d, ",c);
    a=b;
    b=c;
    trn--;
  }
  printf("\n");
}
int main()
{
  int trn;
  printf("Enter the tern till you want the series: ");
  scanf("%d",&trn);
  printf("0 ,1 ");
  fibonacci(trn);
  return 0;
}

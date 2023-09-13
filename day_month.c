#include<stdio.h>
void getDate(int *pd , int *pm, int *py)
{
  printf("Enter the day ,month and year:\n");
  scanf("%d%d%d",pd,pm,py);
}
int main()
{
  int day,month,year;
  getDate(&day,&month,&year);
  printf("%d/%d/%d\n",day,month,year);
  return 0;
}

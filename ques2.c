#include<stdio.h>
void marks(int m1,int m2,int m3,int m4,int m5)
{
  float sum,avg;
  sum=m1+m2+m3+m4+m5;
  avg=sum/5;
  printf("the average marks is:%f\n",avg);
}
int main()
{
  int m1,m2,m3,m4,m5;
  printf("Enert the marks of five subject:\n");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  marks(m1,m2,m3,m4,m5);
  return 0;
}

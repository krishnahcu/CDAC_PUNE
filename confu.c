#include<stdio.h>
int main()
{
  int a=12;
  int *p;
  int **q;
  
  p=&a;
  q=&p;
  printf("%u %u %u\n",a, &a, *p);
  printf("%u %u %u\n",p, &p, *q, **q);
  
  return 0;
}

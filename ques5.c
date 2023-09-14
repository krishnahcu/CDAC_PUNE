#include<stdio.h>
int main()
{
  int bs;
  float hra,da,pf,gs,ns;
  printf("Enter the Basic salary:\n");
  scanf("%d",&bs);
  hra=0.15f*bs;
  da=0.30f*bs;
  gs=bs+hra+da;
  pf=0.125f*gs;
  ns=gs-bs;
  printf("Gross salary:%f \nNet salary:%f\n",gs,ns);
  return 0;
}

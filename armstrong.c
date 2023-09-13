#include<stdio.h>
int main()
{
  int num,orgnum,rem,res=0;
  printf("enter three digit no\n");
  scanf("%d",&num);
  orgnum=num;
  
  while(orgnum!=0)
  {
  rem=orgnum%10;
  res += rem*rem*rem;
  orgnum /= 10;
  }
if(res == num)
{
printf("%d the number is armstrong:\n",num);
}
else
{
printf("%d the number is  not armstrong:\n",num);
}
return 0;
}

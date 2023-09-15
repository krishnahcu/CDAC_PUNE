#include<stdio.h>
int main()
{
  int rem ,sum,i,num;
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
    rem=num%i;
  if(rem==0)
    {
      sum=sum+i;
    }
  }
  if(sum==num)
    printf("Number is perfect number ");
  else
    printf("Number is not perfect number ");
    
  return 0;
  }
  

#include<stdio.h>
int main()
{
  int cnt=1,num;
  printf("Enter the number:\n");
  scanf("%d",&num);
  while(cnt<=10)
  {
    printf("%d  \n",num*cnt);
    //cnt;
    cnt++;
  }
  printf("\n");
  for(cnt=10;cnt>=1;cnt--)
  {
    printf("%d \n",num*cnt);
  }
  return 0;
  }

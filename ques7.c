#include<stdio.h>
int main()
{
  int yr;
  printf("Enter the year:");
  scanf("%d",&yr);
  (yr%4==0 && yr%100!=0 || yr%400==0)?printf("Leap year\n"):printf(" Not Leap year\n");
  return 0;
}

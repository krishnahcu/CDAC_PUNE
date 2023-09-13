#include<stdio.h>
int main()
{
 float percent;
 printf("Enter percentage:\n");
 scanf("%f",&percent);
 if(percent>=65)
 {
  printf("First class with distinction:\n");
}
else if(percent>=60 && percent<65)
{
  printf("First class:\n");
}
else if(percent>=50 && percent<60)
{
  printf("second class:\n");
}
else if(percent>=40 && percent<50)
{
  printf("pass:\n");
}
else
{
  printf("fail\n");
}
return 0;
}

#include<stdio.h>
void Add(int a,int b)
{
  int sum;
  sum=a+b;
  printf("The addition of number:%d\n",sum);
}
void Sub(int a,int b)
{
  int sub;
  sub=a-b;
  printf("The subtaction of number:%d\n",sub);
}
void Mul(int a,int b)
{
  int mul;
  mul=a*b;
  printf("The multyplication of number:%d\n",mul);
}
void Div(int a,int b)
{
  float div;
  div=a/b;
  printf("The division of number:%f\n",div);
}
  
int main()
{
float a,b;
int choice;
printf("Enter the value for USER1:\n");
scanf("%f",&a);
printf("Enter the value for USER2:\n");
scanf("%f",&b);
printf("Enter choice :\n1 for Add\n2 for Sub\n3 for multiply\n4 for Division\n");
scanf("%d",&choice);
switch(choice)
{
  case 1:
    Add(a,b);
    break;
  case 2:
    Sub(a,b);
    break;
  case 3:
    Mul(a,b);
    break;
  case 4:
    Div(a,b);
    break;
  default:
    printf("Invalid choice\n");
  }
  return 0;
}


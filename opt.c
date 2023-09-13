#include<stdio.h>
int main()
{

int a, b, c, num, sum;
printf("enter the no.s\n");
scanf("%4d",&num);
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
num=num/10;
sum=a+b+c+num;
printf("the sum no = %d\n",sum);
return 0;
}

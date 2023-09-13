#include<stdio.h>
void swap(int x, int y)
{
int c;
c=x;
x=y;
y=c;
printf("the swapped value are: %d %d",x,y);
}
int main()
{
int a, b;
printf("enter the two number\n");
scanf("%d%d",&a,&b);
swap(a,b);
return 0;
}


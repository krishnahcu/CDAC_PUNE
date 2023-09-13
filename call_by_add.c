#include<stdio.h>
void swap(int *pa, int *pb)
{
int c;
c=*pa;
*pa=*pb;
*pb=c;
}
int main()
{
int a, b;
printf("enter the a and b\n");
scanf("%d%d",&a, &b);
swap(&a,&b);
printf("swapped values are %d %d\n", a, b);
return 0;
}

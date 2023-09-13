#include<stdio.h>
int main()
{
int n,c,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("prime number\n");
}
else
{
printf("Not prime number\n");
}
return 0;
}

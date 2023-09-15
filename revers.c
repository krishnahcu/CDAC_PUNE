#include<stdio.h>
int main()
{
int n,arr[10],i,t;
printf("How many number want to insert:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
/*for(i=n;i>=0;i--)
  printf("%d",arr[i]);
  
printf("The element are:...\n");
for(i=0;i<n;i++)
{
  printf("%d  ",arr[i]);
}*/

for(i=0; i<n/2; i++)
{
   t=arr[i];
   arr[i]=arr[n-1-i];
  arr[n-1-i]=t;
}

printf("\nRevers are:\n");
for(i=0;i<n;i++)
{
printf("%d  ",arr[i]);
}
printf("\n");
return 0;
}

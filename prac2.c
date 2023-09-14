#include<stdio.h>
int main()
{
  int i,n;
  int arr[10];
  printf("how many element want to insert:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf(".......... Display........\n");
  for(i=0;i<n;i++)
  {
  printf("the element is:%d\n",arr[i]);
  }
  return 0;
}

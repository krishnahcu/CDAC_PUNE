#include<stdio.h>
void FindMaxMin(int arr[],int n)
{
  int max,min,i;
  max=arr[0];
  for(i=1;i<n;i++)
  {
    if(arr[i]>max)
      max=arr[i];
  }
  printf("max=%d\n",max);
  min=arr[0];
  for(i=1;i<n;i++)
  {
    if(arr[i]<min)
      min=arr[i];
  }
  printf("min=%d\n",min);
}
  void MultiplyByFive(int *arr,int n)
  {
    int temp[100],i;
    for(i=0;i<n;i++)
        temp[i]=5*arr[i];
    for(i=0;i<n;i++)
        printf("\n%d",temp[i]);
  }
  
int main()
{
   int arr[100],n,i;
   printf("How many elements:\n");
   scanf("%d",&n);
   printf("Enter integers:\n");
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  FindMaxMin(arr,n);
  MultiplyByFive(arr,n);
  printf("\n");
  return 0;
  }

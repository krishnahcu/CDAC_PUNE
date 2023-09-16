#include<stdio.h>
void Accept(int arr[][3])//subscript natation
{ 
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      {
        scanf("%d",&arr[i][j]);
      }
  }
}
void Display(int (*arr)[3])//pointer notation
{
   int i,j;
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      {
        printf("%d   ",arr[i][j]);
      }
      printf("\n");
  }
}
int main()
{
  int arr[3][3],i,j;
  printf("Enter elements of array:\n");
  Accept(arr);// call by value
  Display(arr);//call by value
  
  /*for(i=0;i<3;i++) // for direct take input
  {
    for(j=0;j<3;j++)
      {
        scanf("%d",&arr[i][j]);
      }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      {
        printf("%d",arr[i][j]);
      }
      printf("\n");
  }*/
  printf("\n");
  return 0;
  }

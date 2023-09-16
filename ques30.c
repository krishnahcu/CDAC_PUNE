#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n,i,sum=0;
    float average;
  printf("Enter the number the subject:\n");
  scanf("%d",&n);
  printf("Enter the subject marks:\n");
  p=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    scanf("%d",&p[i]);
  for(int i=0;i < n;i++)
  {
        sum += p[i];
  }
    printf("The Sum:%d\n",sum);
    average = sum/n;
    printf("The average of elements is : %f", average);  
  free(p);
  p=NULL;
  printf("\n");
  
  return 0;
}


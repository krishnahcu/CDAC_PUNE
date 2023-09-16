#include<stdio.h>
#include<stdlib.h>
//malloc ,calloc,realloc,free
int main()
{
  int *p,n,i;
  printf("How many integer:\n");
  scanf("%d",&n);
  printf("Enter integer:\n");
  p=malloc(sizeof(int)*5);
  for(i=0;i<n;i++)
    scanf("%d",&p[i]);
  for(i=0;i<n;i++)
    printf("%d ",p[i]);
  //free(p);
  p=NULL;
  printf("\n");
  
  return 0;
}


#include<stdio.h>
void CharLine(int len,char ch)
{
  int i;
  for(i=0;i<len;i++)
  {
    printf("%c",ch);
    //printf("\n");
  }
  }
int main()
{
  int len;
  char ch;
  printf("Enter the lenth of border:");
  scanf("%d",&len);
  getchar();
  printf("Enter the character which you want to print:");
  scanf("%c",&ch);
  
  CharLine(len,ch);
  printf("Data Type\t \t size\n");
  CharLine(len,ch);
  printf("Integer\t \t 4\n");
  CharLine(len,ch);
  printf("character\t \t 1\n");
  CharLine(len,ch);
  return 0;
  }

#include<stdio.h>
void fn(int b int x)
{
  printf("i am not in main function:");
  printf("%d\n",b,x);
  
}
int main()
{
  int a=120; b=230;
  fn(a,b);
  fn(a,b);
  fn(a,b);
  fn(a,b);
  return 0;

}

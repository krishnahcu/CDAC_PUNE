#include<stdio.h>
int main()
{
  int arr[5]={10,20,30,40,50};
  printf("%u\n",arr);
  printf("%u\n",&arr);
  printf("%u\n",*arr);
  printf("%u\n",arr+1);
  printf("%u\n",&arr+1);
  printf("%u\n",*arr+1);
  printf("%u\n",arr[3]);
  printf("%u\n",*(arr+3)); //pointer notation
  return 0;
}

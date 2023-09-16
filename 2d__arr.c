#include<stdio.h>
int main()
{
  int arr[3][3]={1,2,3,4,5,6,7,8,9};  
  printf("%u\n",arr); //2752622768
  printf("%u\n",&arr);//2752622768
  printf("%u\n",*arr);//2752622768
  printf("%u\n",**arr);//1
  printf("%u\n",arr+1);//2752622780
  printf("%u\n",&arr+1);//2752622804
  printf("%u\n",*arr+1);//2752622772
  printf("%u\n",**arr+1);//2
  printf("%u\n",*(*(arr+1)+1));//5
  printf("%u\n",arr[1][2]); //6
  printf("%u\n",*(*(arr+1)+2)); //6
  printf("%u\n",*(*(arr+1)+3));  //7
  printf("%u\n",*(*(arr+2)+1));  //8
  printf("%u\n",*(*(arr+)touch+1));  //
  
  
  return 0;
}

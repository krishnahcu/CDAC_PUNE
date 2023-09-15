#include<stdio.h>
void  AreaCircum(int radius,float *parea,float *pperi)
{
  *parea=3.142*radius*radius;
  *pperi=2*3.142*radius;
}
void AreaPeri(int len,int brd,float *area,float *peri)
{
    *area=len*brd;
    *peri=2*(len+brd);
  
}
int main()
{
  int choice ,radius,len,brd;
  float area,peri;
  printf("Enter the Choice:\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
          printf("Enter the radius:\n");
          scanf("%d",&radius);
          AreaCircum(radius,&area,&peri);
          printf("Area of circule is %f and Circufarance of circle is %f\n",area,peri);
          break;
    case 2:
          printf("Enter the length and breadth:\n");
          scanf("%d%d",&len,&brd);
          AreaPeri(len,brd,&area,&peri);
          printf("Area of ractangle is %f and Circufarance of ractangle is %f\n",area,peri);
          break;
          
    }
    return 0;
    }
          
  

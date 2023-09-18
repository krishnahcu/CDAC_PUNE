#include<stdio.h>
//#include<>
typedef struct Laptop
{
int srno;
char make[20];
double cost;
}lappy;
int main()
{
  typedef int abc;
  abc=10;
  printf("%d\n",a);
  
  lappy l1={101,"HP",45000},l2;
  lappy l3, *lptr;
  printf("%d %s %lf\n",l1.srno,l1.make,l1.cost);
  printf("Enter laptop details(id, make, cost)\n");
  scanf("%d %s %lf",&l2.srno,&l2.make,&l2.cost);
  printf("%d %s %lf\n",l2.srno,l2.make,l2.cost);
  lptr=&l3;
  printf("Enter laptop details(id, make, cost)\n");
  scanf("%d %s %lf",&lptr->srno,&lptr->make,&lptr->cost);
  printf("%d %s %lf",lptr->srno,lptr->make,lptr->cost);
  
  
  //printf("%d\n",sizeof(l1));
  return 0;
}

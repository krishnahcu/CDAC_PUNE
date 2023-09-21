#include<iostream>
#include"SalePerson.h"
using namespace std;
SalePerson::SalePerson()
{
  sales=10000;
  commission=0;
}
SalePerson::SalePerson(int id,char *n,int d,int m,int y,int h, int r,int s,int c):WageEmployee(id,n,d,m,y, h, r)// base initiatoization list
{
  sales=s;
  commission=c;
}
void SalePerson::Display()
{
  WageEmployee::Display();
  cout<<sales<<endl;
  cout<<commission<<endl;
}


int SalePerson::Salary(){
  return (sales * commission) + WageEmployee::Salary();
  }

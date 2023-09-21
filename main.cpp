#include<iostream>
#include"SalePerson.h"
using namespace std;
int main()
{
  SalePerson we1(455,"Raja",20,2,1995,20,40, 1, 100);
  we1.Display();
  cout<<we1.Salary()<<endl;
  return 0;
}

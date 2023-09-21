#include"WageEmployee.h"
class SalePerson:public WageEmployee
{
  int sales;
  int commission;
public:
  SalePerson();
  SalePerson(int,char*,int,int,int,int,int,int,int);
  void Display();

  int Salary();
  
};

#include"Employee.h"
class WageEmployee:public Employee
{
  int hours;
  int rate;
public:
  WageEmployee();
  WageEmployee(int,char*,int,int,int,int,int);
  void Display();
  void Commission();
  int Salary();
};

#include"date.h"
class Employee
{
  int empid;
  char name[20];
  Date dob;
  public:
    Employee();
    Employee(int,const char*,int,int,int);
    void Display();
    void Commission();
  };
    
  

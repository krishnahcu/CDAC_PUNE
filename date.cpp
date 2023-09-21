#include<iostream>
#include"date.h"
using namespace std;
Date::Date()
{
  dd=1;
  mm=1;
  yy=2000;
}
Date::Date(int d,int m,int y)
{
  dd=d;
  mm=m;
  yy=y;
}
void Date::Display()
{
   cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}


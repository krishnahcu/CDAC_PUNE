#include<iostream>
using namespace std;
/* Constructor:-
        1.it is fuction with same name as that of class name and no return type.
        2.Constructor is implicitly called whenever an object of a class is created.
        3.It is used to initialize the data member of a class.
        4.Three types of constructors-default,parameterized ,copy,(move constructor in c++)
*/
class Rectangle
{
 int len; //data members
 int brd;
 public: //access specifier
 Rectangle();
 Rectangle(int, int);
 void accept(); //scope resolution
 void calcArea();
 void show();
 int getLen();
 void setLen(int);
};
int Rectangle::getLen()
{
  return len;
}
void Rectangle::setLen(int l)
{
  len=l;
}
Rectangle:: Rectangle()
{
  len=1;
  brd=1;
}
Rectangle:: Rectangle(int l,int b)
{
  len=l;
  brd=b;
}
void Rectangle::accept()
{
cout<<"Enter len and brd:"<<endl;
cin>>len>>brd;
}
void Rectangle::calcArea()
{
  cout<<"Area:"<<len*brd<<endl;
}
void  Rectangle::show()
{
  cout<<"length="<<len<<" "<<"bredth:"<<brd<<endl;
}
  int main()
{
  Rectangle r1,r2(10,20),r3,r4;//object
  cout<<r2.getLen()<<endl;
  r2.show();
  r2.setLen(100);
  r2.show();//
  return 0;
}

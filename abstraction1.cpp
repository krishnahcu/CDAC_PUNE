#include<iostream>
using namespace std;
/* Abstraction - It is a process of identifying key attributes of an entity and ignoring rest of the attribute.
Encapsulation - It refers to the data hiding of data members.
*/
class Rectangle
{
 int len; //data members
 int brd;
 public: //access specifier
 void accept(); //scope resolution
 void calcArea();
};
void Rectangle::accept()

{
cout<<"Enter len and brd:"<<endl;
cin>>len>>brd;
}
void Rectangle::calcArea()
{
cout<<"Area:"<<len*brd<<endl;
}
int main()
{
  Rectangle r1;//object
  r1.accept();
  r1.calcArea();
  return 0;
}

#include<iostream>
using namespace std;
class Complex
{
  int real;
  int img;
public:
  Complex();
  Complex(int,int);
int getReal();
int getImg();
void setReal(int);
void setImg(int);
void show();
};
 Complex::complex()
{
  real=1;
  img=1;
}
Complex::complex(int r, int i)
{
  real=r;
  img=i;
}
int Complex::getReal()
{
  return real;
}
int Complex::getImg()
{
   return img;
}
void Complex::setReal(int r)
{
  real=r;
}
void Compplex::setImg(int i)
{
  img=i;
}
void Complex::show()
{
cout<<"Real:"<<real<<"imagenary:"<<img<<endl;
}
int main()
{
  Complex c1,c2(10,20);
  cout<<c2.getReal()<<endl;
  cout<<c2.getImg()<<endl;
  
  cout<<c2.setReal(30)<<endl;
  cout<<c2.setImg(40)<<endl;
  c2.show();
  return 0;
}
  
  
  

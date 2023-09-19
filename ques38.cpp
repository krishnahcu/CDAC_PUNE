#include<iostream>
using namespace std;

int multiply(int a,int b){
  return a*b;
  }
int multiply(int a,int b,int c)
{
  return a*b*c;
}
int multiply(int a, int b,int c,int d)
{
  return a*b*c*d;
}

int main()
{
cout<<multiply(10,20)<<endl;
cout<<multiply(10,20,30)<<endl;
cout<<multiply(20,10,30,40)<<endl;
return 0;
}

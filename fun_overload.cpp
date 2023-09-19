#include<iostream>
using namespace std;
/*
  Function overloading -in c++ we can have multiple function with same same provide that,their signature is different 
    signature-
    1.Number of argument
    2.data type of argument
    3.sequence of arguments
    return  type do not contribute to signature of a function
*/
int add(int a,int b){
  return a+b;
  }
int add(int a,int b,int c)
{
  return a+b+c;
}
float add(int a, float b)
{
  return a+b;
}
float add(float a, int b)
{
  return a+b;
}
int main()
{
cout<<add(10,20)<<endl;
cout<<add(10,20,30)<<endl;
cout<<add(10,20.5f)<<endl;
cout<<add(20.5f,10)<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter two Integer:"<<endl;
  cin>>a>>b;
  swap(a,b);
  cout<<"Swapped values are:"<<a<<" "<<b<<endl;
 return 0; 
}
void swap(int &ra,int &rb)
{
 int temp;
     temp=ra;
     ra=rb;
     rb=temp;
}

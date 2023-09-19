#include<iostream>
using namespace std;
int main()
{
  
  //int *p=(int*)malloc(sizeof(int)*5);
  int i;
  int *p=new int[5];
  cout<<"Enter five integer"<<endl;
  for(i=0;i<5;i++)
  {
    cin>>p[i];
  }
  for(i=0;i<5;i++)
  {
    cout<<p[i]<<" ";
  }
  //delete []p;
  cout<<endl;
  
  
return 0;
}

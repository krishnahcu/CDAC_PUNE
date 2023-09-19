#include<iostream>
using namespace std;
int main()
{
  
  
  int i,n,sum=0;
  float avg;
  int *p=new int[5];
  cout<<"Enter number of subject"<<endl;
  
  cin>>n;
  cout<<"Enter the marks:"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>p[i];
  }
  for(i=0;i<n;i++)
  {
    sum+=p[i];
  }
  cout<<"Sum is:"<<sum<<endl;
  avg=sum/n;
  cout<<"Avg is:"<<avg<<endl;
  delete []p;
  cout<<endl;
  
  
return 0;
}


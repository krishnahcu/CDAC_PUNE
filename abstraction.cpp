#include<iostream>
using namespace std;
/* Abstraction - It is a process of identifying key attributes of an entity and ignoring rest of the attribute.
Encapsulation - It refers to the data hiding of data members.
*/
struct Rectangle
{
private:
 int len;
 int brd;
};
int main()
{
  struct Rectangle r1;
  cout<<"Enter len and brd:"<<endl;
  cin>>r1.len>>r1.brd;
  //cout<<r1.len<<r1.brd<<endl;
  cout<<"area:"<<r1.len*r1.brd<<endl;
  return 0;
}

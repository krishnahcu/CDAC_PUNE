#include<stdio.h>
int main()
{
int i=12;
const int *p=&i; //p is a pointer to integer constant
p++;  // valid
(*p)++; //invalid
int * const q=&i; //q is a constant pointer to integer
q++;  //invalid
(*q)++;  //valid
const int * const r=&i;  // r is constant pointer to integer constant
r++; //invalid
(*r)++;  //invalid
return 0;
}


#include<stdio.h>
int main()
{
  int a;//a is an integer
  int *b;//b is a pointer to integer 
  float c[5];//c is array of float
  double *d[3];//d is an array of pointer to double
  int (*e)[3];// e is pointer to an  array of integer 
  float (*f[2][2]);//f is an array of pointer to an array of float
  double  (*g)(int);//g is a pointer to function with return type double and int argument
  void(*h[2])(int,int);// h is an array of pointer to function with return type void and to int argument
  float (&i)[4];//i is a reference to an array of float
  return 0;
}

#include<stdio.h>
int main()
{
  int bs,tsa;
  float ns,com;
  printf("Enter the basic salary and total sale amount:\n");
  scanf("%d%d",&bs,&tsa);
  if(tsa>=5000 && tsa<=7500)
    {
      com=0.03f*tsa;
    }
    else if(tsa>=7501 && tsa<=10500)
    {
      com=0.83f*tsa;
    }
    else if(tsa>=10501 && tsa<=15000)
    {
      com=0.11f*tsa;
    }
    else if(tsa>15000) 
    {
      com=0.15f*tsa;
    }
    ns=bs+com;
    printf("Net salary=%f\n",ns);
    return 0;
  }
    

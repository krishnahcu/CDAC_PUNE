#include<stdio.h>
int main()
{
int choice;
printf("enter the choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("one\n");
break;
case 2:
printf("two\n");
break;
case 3:
printf("three\n");
break;
case 4:
printf("four\n");
break;
default:
printf("invalid no\n");
break;
}
return 0;
}

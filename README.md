#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0,b=1,c,num,i=2;
  printf("enter a number");
  scanf("%d",&num);
  while(i>num)
  {
  c=a+b;
  i++;
  }
  printf("the fibonaaci series is %d",c);
  a=b;
  b=c;
  }

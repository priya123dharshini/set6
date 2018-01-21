#include<stdio.h>
void main()
{
 int m,n,t;
 printf("enter two numbers");
 scanf("%d %d",&m &n);
 t=m;
 m=n;
 n=t;
 printf("the swapped values are %d,%d",m,n);
 }

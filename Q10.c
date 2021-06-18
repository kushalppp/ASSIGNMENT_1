#include<stdio.h>
void main()
{
 int s,peri,y,area,a,b,c;
 printf("enter the value of a,b,c");
 scanf("%d %d %d",&a,&b,&c);
 s=(a+b+c)/2;
 peri=a+b+c;
 area=s*(s-a)*(s-b)*(s-c);
 y=sqrt(area);
 printf("the value of area  is =%d\n",y);
 printf("the value of peri is =%d\n",peri);
}
#include<stdio.h>

main()
{
int num,count=0,t,r,f_d,s_d,t_d,fo_d;
printf("enter a four digit");
scanf("%d",&num);
t=r=num;
    while(num!=0)
    {
     num=num/10;
     count++;
     }
  if(count==4)
  {
   f_d=r%10;
   r=r/10;
   s_d=r%10;
   r=r/10;
   t_d=r%10;
   r=r/10;
   fo_d=r%10;
   printf(" %d %d %d %d",fo_d,t_d,s_d,f_d);
   printf("\n %d=%d +%d +%d +%d",t,fo_d*1000,t_d*100,s_d*10,f_d);
   printf("\n%d%d%d%d",f_d,s_d,t_d,fo_d);
  }
  else
{
  printf("number is not four digit");
}
return 0;
}
  

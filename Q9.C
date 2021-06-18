#include<stdio.h>
void main()
{int  c,f,choice;
	printf("if you want  the temperature in celsiuss type 1 ");
	printf("\n if you want the temperature in fahrenheit type 2");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\n enter the temperature in fahrenheit");
			scanf("%d",&f);
		c=0.56*(f-32);
		printf("\n the temp in celsius is=%d",c);
		break;
		case 2:
				printf("\n enter the temperature in celsius");
			scanf("%d",&c);
		f=1.8*c+32;
		printf("\n the temp in fahrenheit is=%d",f);
		break;
	}
	
}
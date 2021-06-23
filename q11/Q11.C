#include<stdio.h>
void signed_one(int count)
{
	int max,min,pro=1;
	while(count!=1)
	{
		pro=pro<<1;
		count--;
	}
	min=~pro;
	min=min+1;
	max=pro;
	max=max-1;
	printf("\n %d to %d",min,max);
}
void unsigned_one(int count)
{
	int max,min,pro=1;
	while(count!=0)
	{
		pro=pro<<1;
		count--;
	}
	min=0;
	max=pro-1;
	printf("\n %u to %u",min,max);
}
void main()

{
	printf("\n range of char");
	signed_one(sizeof(char)*8);
	printf("\n range of unsigned char");
	unsigned_one(sizeof(char)*8);
	printf("\n range of short int");
	signed_one(sizeof(short int)*8);
	printf("\n range of unsigned short int");
	unsigned_one(sizeof(short int)*8);
	printf("\n range of int");
	signed_one(sizeof(int)*8);
	printf("\n range of unsigned int");
	unsigned_one(sizeof(int)*8);
	printf("\n range of long int");
	signed_one(sizeof(long int)*8);
	printf("\n range of unsigned long int");
	unsigned_one(sizeof(long int)*8);
}
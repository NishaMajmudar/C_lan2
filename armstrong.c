#include<stdio.h>
void main()
{
	int first,last,temp,sum=0;
	printf("enter the number");
	scanf("%d",&first);
	temp=first;
	while(first>0)
	{
	last=first%10;
	sum=(sum*10)+last;
	first/=10;
	}
	if(temp==sum)
	{
	printf("number is palindron %d",temp);
	}
	else
	{
	printf("No palindron!!!%d",temp);
	}
}

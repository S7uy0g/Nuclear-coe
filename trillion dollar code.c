#include<stdio.h>
int main()
{
	int a=0,i=0,count=0;
	printf("enter a number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count ++;
		}
	}
	if(count==2)
	{
		printf("\n its prime number.");
	}
	else
	{
		 printf("\n its not prime number.");
	}
	return 0;
}

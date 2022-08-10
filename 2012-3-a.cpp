#include<stdio.h>
#include<conio.h>
#include<math.h>
float function(float x)
{
	return((x*x*x)+(x*x)+x+7);
}
int main()
{
	float a,b,E,f0,f1,f2,x,ans,step;
	printf("Enter two guesses:");
	printf("a:");
	scanf("%f",&a);
	printf("b:");
	scanf("%f",&b);
	printf("Enter ERROR:");
	scanf("%f",&E);
	do
	{
	f1=function(a);
	f2=function(b);
	if(f1*f2>0)
	{
		printf("a and b do not have any root!!!");
		return 0;
	}
	else
	{
		x=(a+b)/2;
		f0=function(x);
		if(f1*f0<0)
		{
			b=x;
			f2=f0;
		}
		else
		{
			a=x;
			f1=f0;
		}
		printf("Iteration:%f",x);
		step=(b-a)/b;
	}
	}
	while(step<E);
	ans=(a+b)/2;
	printf("Root is %f",ans);
}

#include<iostream>
using namespace std;
template <typename T>
void ascending(T a[10])
{
	int i,j;
	float temp;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int x[10],i;
	float y[10];
	for(i=0;i<10;i++)
	{
		cin>>x[i];
	}
	ascending<int>(x);
	for(i=0;i<10;i++)
	{
		cin>>y[i];
	}
	ascending<float>(y);
}

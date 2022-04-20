//ascending order program using template
#include<iostream>
using namespace std;
template<typename num>
num ascending(num n,num a[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
		     {
			    temp=a[i];
			    a[i]=a[j];
			    a[j]=temp;
		     }
		}
	}
	cout<<"Ascending order"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}	
}
int main()
{
	int n;
	cout<<"Enter how many num you wanna sort:";
	cin>>n;
	int a[n];
	int i=0;
	cout<<"Enter num"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ascending<int>(n,a);
}

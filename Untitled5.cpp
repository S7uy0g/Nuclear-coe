#include <iostream>
using namespace std;
template <typename T>
void func(T a[],T c)
	{
		T p=c;
		T i,j,temp;
		for(i=0;i<p;i++)
		{
			for(j=i+1;j<p;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	cout<<"The Ascending Order is "<<endl;
	for(i=0;i<p;i++)
		{
			cout<<"Number "<<i+1<<" : "<<a[i];
			cout<<endl;
		}
	}
int main() 
{
	int i,n;
    cout<<"Enter the amount of numbers: ";
    cin>>n;
    int b[n];
    cout<<"**Enter the numbers ** "<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<"Enter Number "<<i+1<<" : ";
    	cin>>b[i];
    	cout<<endl;
	}
	func<int>(b,n);
	return 0;

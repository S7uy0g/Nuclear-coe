#include<iostream>
using namespace std;
class base
{
	int x,y,z;
	public:
		void sum()
		{
			cout<<x+y+z;
		}
};
class derived:public base
{
	public:
	derived:base(int a,int b)
	{
		x=a;
		y=b;
		z=7;
	}
	derived:base(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
};
int main()
{
	derived ob(5,6);
	ob.sum();
	derived ob(10,11,12);
	ob.sum();
}

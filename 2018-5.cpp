#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	void in(int a)
	{
		x=a;
	}
	int out()
	{
		x=x+5;
		return x;
	}
};
class B
{
	int x;
	public:
		void operator =(A obj)
		{
			x=obj.out();
		}
		void display()
		{
			cout<<x;
		}
};
int main()
{
	B b;
	A a;
	a.in(5);
	b=a;
	b.display();
}

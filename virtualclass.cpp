#include<iostream>
using namespace std;
class base
{
	int x;
	public:
	virtual void f()=0;
    void fun(int a)
	{
		x=a;
		cout<<x;
	}
};
class derived:virtual public base
{
	public:
	void f()
	{
		cout<<"fun called";
	}
};
int main()
{
	derived obj;
	obj.fun(5);
	obj.f();
}

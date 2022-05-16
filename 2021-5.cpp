#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"Base class 1"<<endl;
	}
};
class B
{
	public:
	B()
	{
		cout<<"Base class 2";
	}
};
class C:public A,public B
{
};
int main()
{
	C obj;
}

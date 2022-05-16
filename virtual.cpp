#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun(int a)
		{
			cout<<"virtual";
		}
};
class derived:public base
{
	public:
		void fun()
		{
			cout<<"main";
		}
};
int main()
{
	base *bptr;
	derived obj;
	bptr=&obj;
	bptr->fun(5);
	cout<<endl;
	obj.fun();
}

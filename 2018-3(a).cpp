#include<iostream>
using namespace std;
class base
{
	public:
	void fun()
	{
		cout<<"A";
	}
};
class derived
{
	public:
		void fun()
		{
			cout<<"B";
		}
}; 
int main()
{
	derived obj;
	obj.fun();
}

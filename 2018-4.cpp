#include<iostream>
using namespace std;
class eg
{
	static int x;
	public:
	static void fun()
	{cout<<x;}
};
int eg::x=5;
int main()
{
	eg::fun();
}

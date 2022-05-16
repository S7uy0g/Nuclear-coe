#include<iostream>
using namespace std;
void funOverloading()
{
	cout<<"Function Overloaading"<<endl;
}
void funOverloading(int x, int y)
{
	cout<<x+y<<endl;
}
void funOverloading(double x,double y)
{
	cout<<x+y;
}
int main()
{
	funOverloading();
	funOverloading(5,5);
	funOverloading(5.5,5.5);
}

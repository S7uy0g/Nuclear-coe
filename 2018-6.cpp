#include<iostream>
using namespace std;
void perimeter(int a)
{
	cout<<"Square="<<4*a<<endl;
}
void perimeter(int a,int b)
{
	cout<<"Rectangle="<<2*(a+b)<<endl;
}
void perimeter(double a)
{
	cout<<"Circle="<<2*(22/7)*a;
} 
int main()
{
	perimeter(5);
	perimeter(5,6);
	perimeter(5.1);
}

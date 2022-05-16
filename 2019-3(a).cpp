#include<iostream>
using namespace std;
int fun(int a,int b,int c=0,int d=0)
{
	return(a+b+c+d);
}
int main()
{
	cout<<"Sum:"<<fun(5,6);
	cout<<"Sum:"<<fun(5,6,7);
	cout<<"Sum:"<<fun(5,6,7,8);
}

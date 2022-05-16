#include<iostream>
using namespace std;
template <typename T>
T swap(T a, T b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swap:"<<endl<<a<<" "<<b;
}
int main()
{
	int x,y;
	swap<int>(5,7);
}

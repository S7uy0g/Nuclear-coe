#include<iostream>
using namespace std;
class Constructor
{
	public:
	Constructor(int a,int b)
	{
		int sum;
		sum=a+b;
		cout<<"Sum:"<<sum;
	}
};
int main()
{
	Constructor obj(5,5);
}

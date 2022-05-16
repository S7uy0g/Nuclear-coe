#include<iostream>
using namespace std;
int main()
{
	int x=17;
	try
	{
		if(x<18)
		{
			throw x;
		}
	}
	catch(int a)
	{
		cout<<"Under 18!!"<<endl;
		cout<<"Your Age:"<<a;
	}
	return 0;
}

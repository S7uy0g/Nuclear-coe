#include <iostream>
using namespace std;

class Demo
{
	private:	
		static int X;

	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
			X++;
		}
};

//defining
int Demo :: X =10;


int main()
{
	Demo X,Y,Z;

	X.fun();
	Demo::fun();
	Y.fun();
	Demo::fun();
	Z.fun();
	Demo::fun();
	return 0;
}


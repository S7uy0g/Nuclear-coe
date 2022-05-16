#include<iostream>
#include<math.h>
using namespace std;
class funOverloading
{
	int a,b,c;
	public:
	int power(int a,int b)//Function Overloading
	{
		return pow(a,b);
	}
	int power(int a,int b,int c)//Function Overlaoding
	{
		return pow(a+b,c);
	}
};
int main()
{
	funOverloading num;
	cout<<"Function Overloading:"<<endl;
	cout<<num.power(2,2)<<endl;//Calling of Function
    cout<<num.power(2,2,2);//Calling of Function
}

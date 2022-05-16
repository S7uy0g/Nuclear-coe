#include<iostream>
using namespace std;
class calArea
{
	static float PI;
	public:
	int funArea(int a,int b)
	{
		return a*b;
	}
	float funArea(float r)
	{
		return PI*r*r;
	}
};
float calArea::PI=3.1415;
int main()
{
	calArea obj;
	cout<<"Area of Rectangle(5,4)="<<obj.funArea(5,4)<<endl;
	cout<<"Area of Circle(10)="<<obj.funArea(10.00);
}

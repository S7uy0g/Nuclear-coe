#include<iostream>
using namespace std;
class areaRectangle
{
	int length,breadth,result;
	public:
	void putData(int x=0,int y=0)
	{
		length=x;
		breadth=y;
	}
	int calculate()
	{
		result=length*breadth;
		return result;
	}
};
int main()
{
	areaRectangle obj;
	int x,y;
	cout<<"Enter length and breadth:";
	cin>>x>>y;
	obj.putData(x,y);
	cout<<"Area:"<<obj.calculate();
}

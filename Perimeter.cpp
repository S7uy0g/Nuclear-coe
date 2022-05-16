#include<iostream>
using namespace std;
class peri
{
	public:
	float perimeter(float a)
	{
		return 2*3.1415*a;
	}			
	int perimeter(int a)
	{
	    return 4*a;	
	}
	int perimeter(int a,int b)
	{
		return 2*(a+b);
	}
};
int main()
{
	peri obj;
	cout<<"Perimeter of square(l=5):"<<obj.perimeter(5)<<endl;
	cout<<"Perimeter of rectangle(l=5,b=10):"<<obj.perimeter(5,10)<<endl;
	cout<<"Circumference/Perimeter of circle(r=5.00):"<<obj.perimeter(10.00)<<endl;
}

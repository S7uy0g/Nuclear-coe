#include<iostream>
using namespace std;
class emp
{
	int a,b;
	public:
		emp(int x,int y)
		{
			a=x;
	    	b=y;
		}
		emp(const emp &obj)
		{
			a=obj.a;
			b=obj.b;
		}
		~emp()
		{
		}
		void display()
		{
			cout<<"A:"<<a<<" B:"<<b;
		}
};
int main()
{
	emp no1(5,6);
	emp no2=no1;
	no2.display();
}

#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time(int a,int b)
		{
			hrs=a;
			min=b;
		}
		int calTime()
		{
			int totMin;
			totMin=(hrs*60)+min;
			return totMin;
		}
};
class Min
{
	int min;
	public:
		Min()
		{
			min=0;
		}
		void operator =(Time T)
		{
			min=T.calTime();
		}
		void display()
		{
			cout<<"Total Min:"<<min;
	    }
};
int main()
{
	Time obj(5,6);
	Min min1;
	min1=obj;
	min1.display();
}

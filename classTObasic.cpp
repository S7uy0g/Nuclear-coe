#include<iostream>
using namespace std;
class Time
{
	int h,m;
	public:
		Time(int a)
		{
			h=a/60;
			m=a%60;
		}
		void display()
		{
			cout<<h<<"hrs "<<m<<"min";
		}
};
int main()
{
	int duration;
	cout<<"Enter duration:";
	cin>>duration;
	Time obj=duration;
	obj.display();
}

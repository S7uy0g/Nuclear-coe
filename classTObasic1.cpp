#include<iostream>
using namespace std;
class Time
{
	int h,m;
	public:
		void operator=(int a)
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
	cout<<"Enter Duration:";
	cin>>duration;
	Time obj;
	obj=duration;
	obj.display();
	obj.operator=(duration);
	obj.display();
}

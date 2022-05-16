#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time(int);
		void display();
};
Time::Time(int t)
{
	cout<<"Basic type to class type"<<endl;
	hrs=t/60;
	min=t%60;
}
void Time::display()
{
	cout<<hrs<<"hrs "<<min<<"min";
}
int main()
{
	int duration;
	cout<<"Enter duration:";
	cin>>duration;
	Time t1=duration;
	t1.display();
}

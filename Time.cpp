#include<iostream>
using namespace std;
class addTime
{
	int hour,min;
	public:
	void getData()
	{
		cout<<"Enter time:"<<endl;
		cout<<"Hour:";
		cin>>hour;
		cout<<"Min:";
		cin>>min;
	}
	void add(addTime obj)
	{
		hour=hour+obj.hour;
		min=min+obj.min;
		if(min>=60)
		{
			min=min-60;
			hour=hour+1;
		}
	}
	void display()
	{
		cout<<"Added Time:"<<endl;
		cout<<"Hour:"<<hour<<endl;
		cout<<"Min:"<<min<<endl;
	}
};
int main()
{
	addTime time1,time2;
	time1.getData();
	time2.getData();
	time1.add(time2);
	time1.display();
}

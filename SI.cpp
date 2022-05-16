#include<iostream>
using namespace std;
class SI
{
	int pri;
	float time,rate,si;
	public:
		void putData()
		{
			cout<<"Enter principle time and rate:"<<endl;
			cout<<"Principle:";
			cin>>pri;
			cout<<"Time:";
			cin>>time;
			cout<<"Rate:";
			cin>>rate;
		}
		SI calc(SI obj)
		{
			SI temp;
			temp.si=(obj.pri*obj.time*obj.rate)/100;
			return temp;
		}
		void display()
		{
			cout<<"Simple Interest:"<<si;
		}
};
int main()
{
	SI obj1,ans;
	obj1.putData();
	ans=ans.calc(obj1);
	ans.display();
}

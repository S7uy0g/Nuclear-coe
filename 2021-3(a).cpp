#include<iostream>
using namespace std;
class Namestrings
{
	string FN,LN;
	public:
		void FirstName()
		{
			cout<<"First Name:";
			cin>>FN;
		}
		void LastNAme()
		{
			cout<<"Last Name:";
			cin>>LN;
		}
		Namestrings operator +(Namestrings obj)
		{
			Namestrings A;
			A.FN=FN+" "+obj.LN;
			return A;
		}
		void print()
		{
			cout<<FN;
		}
};
int main()
{
	Namestrings obj1,obj2,Full_name;
	obj1.FirstName();
	obj2.LastNAme();
	Full_name=obj1+obj2;
	cout<<"Full Name:"<<endl;
	Full_name.print();
}

#include<iostream>
using namespace std;
class Employee
{
	string name,position;
	int ID,salary;
	public:
		void putData()
		{
			cout<<"Name:";
			getline(cin,name);
			fflush(stdin);
			cout<<"Position:";
			getline(cin,position);
			fflush(stdin);
			cout<<"ID:";
			cin>>ID;
			fflush(stdin);
			cout<<"Salary:";
			cin>>salary;
			fflush(stdin);
		}
		void showData()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Position:"<<position<<endl;
			cout<<"ID:"<<ID<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};
int main()
{
	Employee obj[3];
	int i=0;
	cout<<"Enter Employee Details:"<<endl;
	for(i=0;i<3;i++)
	{
		obj[i].putData();
		cout<<endl;
	}
	cout<<"Employee Details:"<<endl;
	for(i=0;i<3;i++)
	{
		obj[i].showData();
		cout<<endl;
	}
}

/*WAP to create a class EMP with data members(id,name,address).Derive a class SAlary with data members (basical,post) 
and again derive class RECORD with data members(Month,Absent,Total) and display employee complete information whweere total is calculated
by deducting "absent" days from "basical"*/
#include<iostream>
using namespace std;
class EMP
{
	int id;
	char name[20],address[20];
	public:
		void getDetails()
		{
			cout<<"Enter Details:"<<endl;
			cout<<"Name:";
			cin.get(name,20);
			fflush(stdin);
			cout<<"Address:";
			cin.get(address,20);
			fflush(stdin);
			cout<<"ID:";
			cin>>id;
			fflush(stdin);
		}
};
class salary:public EMP
{
	int basical;
	char post[20];
	public:
		void getSalPos()
		{
			cout<<"Basic Salary:";
			cin>>basical
			fflush(stdin);
			cout<<"Post:";
			cin.get(post,20);
			fflush(stdin);
		}
};
class record:public salary
{
	
};


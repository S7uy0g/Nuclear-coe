/*WAP to create a class EMP with data members(id,name,address).Derive a class SAlary with data members (basical,post) 
and again derive class RECORD with data members(Month,Absent,Total) and display employee complete information where total is calculated
by deducting "absent" days from "basical"*/
#include<iostream>
using namespace std;
class EMP
{
	int id;
	string name,address;
	public:
		void getDetails()
		{
			fflush(stdin);
			cout<<"Enter Details:"<<endl;
			cout<<"Name:";
			getline(cin,name);
			fflush(stdin);
			cout<<"Address:";
			getline(cin,address);
			fflush(stdin);
			cout<<"ID:";
			cin>>id;
			fflush(stdin);
		}
};
class salary:public EMP
{
		public:
	int basical;
	char post[20];
		void getSalPos()
		{
			fflush(stdin);
			cout<<"Basic Salary:";
			cin>>basical;
			fflush(stdin);
			cout<<"Post:";
			cin.get(post,20);
			fflush(stdin);
		}
};
class record:public salary
{
	int absent,total,updated;
	public:
	static int month;
	    void recData()
	    {
	    	fflush(stdin);
	    	cout<<"Absent Days:";
	    	cin>>absent;
	    	fflush(stdin);
	    	total=month-absent;
	    	cout<<"Total days present:"<<total<<endl;
		}
		void calSal()
		{
			updated=basical/30;
			basical=updated*total;
			cout<<"Salary Obtained(after deducting absent days salary):"<<basical<<endl;
		}
	
};
int record::month=30;
int main()
{
	record obj[3];
	int i,n;
	cout<<"Enter how many emp det you want to enter:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		obj[i].getDetails();
		obj[i].getSalPos();
		obj[i].recData();
		obj[i].calSal();
	}
}


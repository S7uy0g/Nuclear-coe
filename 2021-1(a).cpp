#include<iostream>
using namespace std;
class Emp_info
{
	int Emp_id;
	string Emp_name;
	public:
		void getDet()
		  {
		     cout<<"Name:";
		     getline(cin,Emp_name);
		     fflush(stdin);
		     cout<<"ID:";
		     cin>>Emp_id;
		     fflush(stdin);
	      }
	    void ShowDet()
		  {
		     cout<<"Name:"<<Emp_name<<endl;
		     cout<<"ID:"<<Emp_id<<endl;
	      }  
};
class Finance_info:public Emp_info
{
	int Basic_salary,OT_salary;
	public:
		int Sal;
		void getSal()
		{
			cout<<"Basic Salary:";
			cin>>Basic_salary;
			cout<<"OT Sakary:";
			cin>>OT_salary;
			Sal=Basic_salary+OT_salary;
		}
};
class Extra_Allowance
{
	int Extra_All,House_All,Daily_All;
	public:
		int All;
		void getAll()
		{
			cout<<"Extra:";
			cin>>Extra_All;
			cout<<"House:";
			cin>>House_All;
			cout<<"Daily:";
			cin>>Daily_All;
			All=Extra_All+House_All+Daily_All;
		}
};
class Total_Info:public Finance_info,public Extra_Allowance
{
	int Total_salary;
	public:
	void calculate()
	{
		Total_salary=Sal+All;
		cout<<"Gross Salary:"<<Total_salary;
	}
};
int main()
{
	Total_Info obj;
	cout<<"Enter details:"<<endl;
	obj.getDet();
	obj.getSal();
	obj.getAll();
	cout<<"Details and Salary:"<<endl;
	obj.ShowDet();
	obj.calculate();
}

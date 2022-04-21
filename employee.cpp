#include<iostream>
using namespace std;
class Employee
{
	int age,salary,id;
	char name[20];
	public:
		void putData()
		{
			cout<<"Enter details:"<<endl;
			cout<<"Name:";
			cin.get(name,20);
			fflush(stdin);
			cout<<"ID:";
			cin>>id;
			fflush(stdin);
			cout<<"Age:";
			cin>>age;
			fflush(stdin);
			cout<<"Salary:";
			cin>>salary;
			fflush(stdin);
		}
		void showData()
		{
			cout<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Age:"<<age<<endl<<"Salary:"<<salary<<endl;
		}
		friend Employee highestSalary(Employee obj[5]);
};
Employee highSalary(Employee obj[5])
		{
			int i,j;
			Employee temp;
			for(i=0;i<3;i++)
			{
				for(j=1;j<3;j++)
				{
					temp=obj[i];
					obj[i]=obj[j];
					obj[j]=temp;
				}
			}
			return obj[0];
		}
int main()
{
	Employee emp[3],highest;
	int i;
	for(i=0;i<3;i++)
	{
		emp[i].putData();
	}
	highest=highSalary(emp);
	cout<<"Employee with highest salary:"<<endl;
	highest.showData();
}

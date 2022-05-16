#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
	string name;
	int roll;
	public:
		void putName()
		{
			cout<<"Name:";
			getline(cin,name);
			fflush(stdin);
			cout<<"Roll No:";
			cin>>roll;
			fflush(stdin);
			cout<<endl;
		}
		void showName()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll No:"<<roll;
		}
};
class marks:public student
{
	int C,DL,Math;
	public:
		int putMarks()
		{
			int sum;
			cout<<"C++:";
			cin>>C;
			fflush(stdin);
			cout<<"D.L:";
			cin>>DL;
			fflush(stdin);
			cout<<"Math:";
			cin>>Math;
			fflush(stdin);
			cout<<endl;
		    sum=C+DL+Math;
			return sum;
		}
		void showMarks()
		{
			cout<<"C++:"<<C<<endl;
			cout<<"DL:"<<DL<<endl;
			cout<<"Math:"<<Math<<endl;
		}
};
class record:public marks
{
	int semester[8],average[8];
	public:
		void semMarks()
		{
			int i=0;
			marks obj;
			for(i=0;i<8;i++)
			{
				cout<<"Sem:";
				cin>>semester[i];
				average[i]=obj.putMarks()/3;
			}
		}
		void showMarks()
		{
			int i=0;
			for(i=0;i<8;i++)
			{
				cout<<"Sem:"<<semester[i]<<endl;
				cout<<"Average:"<<average[i]<<endl;
			}
		}
};
int main()
{
	record student;
	cout<<"Enter detais of students:"<<endl;
	student.putName();
	student.semMarks();
	system("cls");
	cout<<"Detais of students:"<<endl;
	student.showName();
	student.showMarks();
}

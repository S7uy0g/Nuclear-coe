/*Assume that the bank maintains two kinds of accounts one is callled savings acc and another is called current acc,the savings acc provides
compound interest @10% current acc holders get simple interest of 5% per year 
create a class acc that stores customer name and acc no. From this derive the classes current_acc and saving_acc.
Include necessary member functin and calculate the total amt of money in an acc for both type of customers.(2017-8)*/
#include<iostream>
using namespace std;
#include<cmath>
class account
{
	string name;
	int num;
	public:
		void putData()
		{
			cout<<"Enter details:"<<endl;
			cout<<"Enter Name:";
			getline(cin,name)
			cout<<"Enter AccNo.:";
			cin>>num;
		}
};
class current_acc:public account
{
	public:
	int siPri,siTime;
	double SI;
	static double siRate;
	void putSiData()
	{
		cout<<"Enter principle:";
		cin>>siPri;
		cout<<"Enter time:";
		cin>>siTime;
	}
	void calculateSI()
	{
		SI=(siPri*siTime*siRate)/100
		cout<<"Simple Interest(S.I):"<<SI;
	}
};
double current_acc::siRate=0.05;
class saving_acc:public account
{
	public:
		int ciPri,ciTime;
		double CI;
		static double ciRate;
		void putCiData()
		{
			cout<<"Enter principle:";
		    cin>>ciPri;
		    cout<<"Enter time:";
		    cin>>ciTime;
		}
		void calculateCI()
	    {
		    CI=ciPri*pow((1+ciRate),ciTime)-1;
		    cout<<"Compound Interest(C.I):"<<CI;
	    }
};
double saving_acc::ciRate=0.10;
int main()
{
	current_acc obj1;
	saving_acc obj2;
	obj1.putData();
	obj1.putSiData();
	obj1.calculateSI();
	obj2.putCiData();
	obj2.calculateCI();
}

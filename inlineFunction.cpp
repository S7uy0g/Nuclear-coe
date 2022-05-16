#include<iostream>
using namespace std;
class inlineFunction
{
	int a,b,sum;
	public:
	void getData();
	int calculation(); 
};
inline void inlineFunction::getData()
{
	cout<<"Enter Values:"<<endl;
	cout<<"1st num: ";
	cin>>a;
	cout<<"2nd num: ";
	cin>>b;
}
inline int inlineFunction::calculation()
{
	sum=a+b;
	return sum;
}
int main()
{
	inlineFunction obj;
	int result;
	obj.getData();
	result=obj.calculation();
	cout<<"Sum="<<result;
}

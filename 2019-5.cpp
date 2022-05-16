#include<iostream>
using namespace std;
class overload
{
	int x,y;
	public:
		overload(int a,int b)
		{
			x=a;y=b;
		}
		overload operator +(overload temp)
		{
			overload temp1(0,0);
			temp1.x=this->x+temp.x;
			temp1.y=this->y+temp.y;
			return temp1;
		}
		void display()
		{
			cout<<x<<"+i"<<y;
		}
};
int main()
{
	overload obj1(5,6);
	overload obj2(5,6);
	overload ans(0,0);
	ans=obj1+obj2;
	ans.display();
}

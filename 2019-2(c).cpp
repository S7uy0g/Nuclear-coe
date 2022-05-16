#include<iostream>
using namespace std;
class CN2;
class CN1
{
	int x,y;
		public:
		CN1(int a,int b)
		{
			x=a;
			y=b;
		}
		friend void add(CN1,CN2);
};
class CN2
{
	int x,y;
	public:
		CN2(int a,int b)
		{
			x=a;
			y=b;
		}
		friend void add(CN1,CN2);
};
void add(CN1 obj1,CN2 obj2)
{
	int r,i;
	r=obj1.x+obj2.x;
	i=obj1.y+obj2.y;
	cout<<r<<"+i"<<i;
}
int main()
{
	CN1 c1(5,6);
	CN2 c2(5,6);
	add(c1,c2);
}

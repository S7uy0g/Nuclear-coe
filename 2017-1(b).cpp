#include<iostream>
using namespace std;
class ADD
{
int num;
public:
void input()
{
cout<<"Input Num:";
cin>>num;
}
friend ADD sum(ADD,ADD);
void output()
{
cout<<"Sum:"<<num;
}
};
ADD sum(ADD a,ADD b)
{
ADD t;
t.num=a.num+b.num;
return t;
}
int main()
{
ADD a,b,c;
a.input();
b.input();
c=sum(a,b);
c.output();
}

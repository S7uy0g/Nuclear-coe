#include<iostream>
using namespace std;
template <typename T>
class Exam
{
	public:
	Exam(T a,T b)
	{
		cout<<a+b;
	}
};
int main()
{
	Exam<int>(5,5);
	Exam<double>(5.5,5.5);
}

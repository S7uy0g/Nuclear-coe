#include<iostream>
using namespace std;
template< class T>
T get_sum(T arr[], int n)
{
	return arr[0] + arr[n - 1];
}

int main()
{
	int N;
	cout<<"Enter limit of numbers in array:";
	cin>>N;
	int int_array[N];
	float float_array[N];
	cout<<"Enter integer array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>int_array[i];
	}
	cout<<"Enter floating array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>float_array[i];
	}
	cout<<"Sum of first and last element of integer array :"<<get_sum(int_array,N)<<endl;
	cout<<"Sum of first and last element of floating array :"<<get_sum(float_array,N)<<endl;
	return 0;
}

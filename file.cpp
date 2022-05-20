#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("D:\\test.txt",ios::out);
	if(!file)
	{
		cout<<"FAILED!!!";
	}
	else
	{
		cout<<"Creation sucessfull"<<endl;
		string text;
		cout<<"Enter text:"<<endl;
		getline(cin,text);
		file<<text;
		file.close();
	}
	string text1;
	cout<<"Entered text:"<<endl;
	file.open("D:\\test.txt",ios::in);
	while(getline(file,text1))
	{
		cout<<text1;
	}
	file.close();
	return 0;
}

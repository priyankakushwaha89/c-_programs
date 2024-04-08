//scope resolution operator

#include<iostream>
using namespace std;

class student
{
	string sname;
	int rno;
	public:
		void getdata()
		{
			cout<<"enter the student name and roll number"<<endl;
			cin>>sname>>rno;
			
		}
	void show();	
};
 void student :: show()
{
	cout<<"student name="<<sname<<endl;
	cout<<"roll number="<<rno<<endl;
}
int main()
{
	student x;
	x.getdata();
	x.show();
	return 0;
	
}

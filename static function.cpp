//static member function
#include<iostream>
using namespace std;

class student
{
	static char name;
	int rno;
	public:
		static void getdata()
		{
			cout<<"enter the student name"<<endl;
			cin>>name;
		};
		void data()
		{
		
			cout<<"enter the roll number"<<endl;
			cin>>rno;
		}
		void show()
		{
			cout<<"student name="<<name<<endl;
			cout<<"roll no="<<rno<<endl;
		}
	
};
char student::name=0;
int main()
{
	student x;
	student::getdata();
	x.data();
	x.show();
	return 0;
}

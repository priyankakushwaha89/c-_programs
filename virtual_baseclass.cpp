//virtual base class

#include<iostream>
using namespace std;

class student
{
	
	public:

	virtual	void show()
		{
			cout<<"i am student"<<endl;
		}
};
class teacher: public student
{
	
	public:
		void show()
		{
			cout<<"i am teacher"<<endl;
		}
};
int main()
{
	
	student *ptr;
	
	teacher y;
	ptr=&y;
	ptr->show();
	
	return 0;

	
}

//class and object program

#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
	string address;
	public:
		void getdata()
		{
			cout<<"enter the name "<<endl;
			cin>>name;
			cout<<"enter the age"<<endl;
			cin>>age;
			cout<<"enter the address"<<endl;
			cin>>address;
			
		}
		void show()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Age="<<age<<endl;
			cout<<"Address="<<address<<endl;
		}
};
int main()
{
	person x,y,z;
	x.getdata();
	x.show();
	
	y.getdata();
	y.show();
	
	z.getdata();
	z.show();
	
	return 0;
}

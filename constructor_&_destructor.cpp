//Constructor and Destructor

#include<iostream>
using namespace std;

int c=0;
class test
{
	public:
		test()
		{
			c++;
			cout<<"object is created=(object "<<c<<")"<<endl;
		}
		~test()
		{
			cout<<"object is destroy=(object "<<c<<")"<<endl;
			c--;
		}
};
int main()
{
	test x,y,z;
	
	return 0;
}


#include<iostream>
using namespace std;

class add
{
	static int a;
	int b;
	public:
		void getdata()
		{
			b=0;
		}
		void show()
		{
			a++;
			b++;
			cout<<"a="<<a<<" "<<"b="<<b<<endl;
			
		}
		
};
int add :: a=0;
int main()
{
	add x,y,z;
	x.getdata();
	x.show();
	y.getdata();
	y.show();
	z.getdata();
	z.show();
	return 0;
}

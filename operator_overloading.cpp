//operator overloading
// complex number sum
#include<iostream>
using namespace std;

class complex
{
	int r,i;
	public:
		void getdata()
		{
			cout<<"enter the real and imaginary numbers"<<endl;
			cin>>r>>i;
		}
		void show()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}
		complex operator +(complex k)
		{
			complex m;
			m.r=r+k.r;
			m.i=i+k.i;
			return m;
		}
};
int main()
{
	complex x,y,z;
	x.getdata();
	x.show();
	
	y.getdata();
	y.show();
	
	z=x+y;
	cout<<"sum of complex numbers"<<endl;
	z.show();
	
	return 0;
}

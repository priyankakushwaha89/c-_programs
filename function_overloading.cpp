//function overloading

#include<iostream>
using namespace std;

class Area
{
	public:
	
		int area(int l,int b)
		{
			return (l*b);
		}
		int area(int s)	
		{
		 return (s*s);
		}
};
int main()
{
	Area y,z;
	
	
	int B=y.area(9,8);
	cout<<"area of rectangle="<<B<<endl;
	
	int C=z.area(5);
	cout<<"area of square="<<C<<endl;
	
	return 0; 
}

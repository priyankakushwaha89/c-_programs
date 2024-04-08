//inline function: 

#include<iostream>
using namespace std;

class A
{
	public:
		inline float area(int r)
		{
			return(3.14*r*r);
		}
};
int main()
{
	A x;
  float A=x.area(2);
	cout<<"area of circle="<<A<<endl;
}

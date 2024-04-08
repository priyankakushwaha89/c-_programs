//Call by reference

#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"x="<<x<<"  "<<"y="<<y<<endl;
}
int main()
{
	int a=10,b=20;
	cout<<"Before swapping"<<endl;
	cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	
	swap(a,b);
	cout<<"After swapping"<<endl;
	cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	
	return 0;
} 


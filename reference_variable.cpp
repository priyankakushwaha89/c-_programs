/*Reference variable: The variable that provide alternative name of previously 
defined variable or existing variable called reference variable*/

#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &b=a;
	
	cout<<"a="<<a<<"   "<<"b="<<b<<endl;
	b++;
	cout<<"a="<<a<<"   "<<"b="<<b<<endl;
	
	return 0;
}

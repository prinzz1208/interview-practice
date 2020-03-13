
#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	a=a+b;
	b=a-b; 
	a=a-b;
}
int main()
{
	int c=7,d=8;
	swap(c,d);
	cout<<"c:"<<c<<" d:"<<d;
}

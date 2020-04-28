#include <iostream>
#include <cmath>
using namespace std;
int *a;
int dollars(int n)
{
	if(a[n] != 0){
		return a[n];
	}
	if(floor(n/2) == 0 || floor(n/3) == 0 || floor(n/4) == 0){
		return n;
	}
	else
		return a[n] = dollars(n/2) + dollars(n/3) + dollars(n/4);
	
}	
int main()
{
	int n;
	int input[2];
	for (int i = 0; i < 2; i++)
	{
		cin>>n;
		input[i] = n;
	}
	for (int i = 0; i < 2; i++)
	{
		a = new int[input[i]];
		cout<<dollars(input[i])<<"\n";
	}
}

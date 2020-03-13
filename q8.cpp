//How do you remove duplicates from an array in place?
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	int a[]={5,4,3,1,2,3,5,7,4};
	int n=sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < n; i++)
	{
		if(a[i]>0){
			for (int j = i+1; j < n; j++)
			{
				if(a[i]==a[j]){ a[j]=-1;}	
			}
		}
	}
	for (int i = 0; i < n; i++)
	{	cout<<a[i]<<"\t";	}
	
}

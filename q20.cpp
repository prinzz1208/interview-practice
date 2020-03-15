//How do you find the largest and smallest number in an unsorted integer array?
//can be done after sorting with quicksort or mergesort
#include <iostream>
using namespace std;
int main()
{
	int a[]={3,2,1,5,7,8,1,3};
	int n=sizeof(a)/sizeof(a[0]),max=a[0],min=a[0];
	
	for (int i = 0; i < n; i++)
	{
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	
	cout<<"max:"<<max<<" min:"<<min;
}

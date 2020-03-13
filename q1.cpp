#include <iostream>
using namespace std;
int * bubblesort(int *a,int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j > i; j--)
		{
			if (a[j-1]>a[j])
			{
				a[j]+=a[j-1];
				a[j-1]=a[j]-a[j-1];
				a[j]=a[j]-a[j-1];
			}
		}
		
	}
	return a;
}

int main()
{
	int a[]={5,3,2,1};
	int n=4;
	int *ptr=bubblesort(a,n);
	for (int i = 0; i < n; i++)
	{
		cout<<"\t"<<ptr[i];
	}
	
}

//How do you find all pairs of an integer array whose sum is equal to a given number?
#include <iostream>
#include <map>
using namespace std;
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9},givenNo = 6;
	int n = sizeof(a)/sizeof(a[0]);
	map<int,int> result;
	for (int i = 0; i < n; i++)
	{
		//cout<<endl<<a[i];
		if(a[i] > 0){
			for (int j = i+1; j < n; j++)
			{
				if(a[j] > 0){
					if(a[i]+a[j] == givenNo){
						////cout<<"\n"<<a[i]<<" "<<a[j];
						result.insert(pair<int,int>(a[i],a[j]));
						a[i] = -1; a[j] = -1;
						break;
					}
				}
			}
		}
	}
	map<int, int>::iterator i;
	for (i = result.begin(); i != result.end(); ++i)
	{
		cout<<"\n"<<i->first<<" "<<i->second;
	}
	
}

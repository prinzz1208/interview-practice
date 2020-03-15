//How do you find the missing number in a given integer array of 1 to 100?
#include <iostream>
using namespace std;
void binarySearch(int *a,int first,int last)
{
	int lb=first;
	int ub=last;
	int mid=(first+last)/2;
	cout<<"\n a[mid]:"<<a[mid]<<" mid:"<<mid;
	if(a[lb]!=(lb+1) && (ub-lb==1)){
		cout<<"\nMissing no. a[lb]+1:"<<a[lb]+1;
		return;
	}else if((a[lb]!=(lb+1))){
		cout<<"\nMissing no. (lb+1):"<<lb+1;
		return;
	}else if((a[ub]!=(ub+2))){
		cout<<"\nMissing no. (ub+1):"<<ub+2;
		return;
	}else if((a[ub]!=(ub+1)) && (ub-lb==1)){
		cout<<"\nMissing no. a[ub]-1:"<<a[ub]-1;
		return;
	}
	else if(abs(a[mid]-(mid+1))>=1){
		binarySearch(a,lb,mid);
	}else if(a[mid]-(mid+1)==0){
		binarySearch(a,mid,ub);
	}
	else if(((lb>=ub) | (a[mid+1]-a[mid]==1)) ){
		cout<<"\nNo Missing no.";
		return;
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	binarySearch(a,0,n-1);
	
	//cout<<"Enter n for the range 1-n:";
	//cin>>n;
	//a=new int[n];
	//int x=rand()%n;
	//cout<<endl<<x<<"\n";
	//for (int i = 1; i <=n; i++)
	//{
		//if(x==i){ }
		//else
			//a[i]=i;
		//cout<<"\t"<<a[i];
	//}
	
}

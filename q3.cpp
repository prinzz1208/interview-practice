#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string s="NAMAN";
	cout<<"Enter char who's occurence is to be found in "<<s<<" :";
	char in=getchar();
	int count=0;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		if(s[i]==in){
			count++;
		}
	}
	cout<<"Count: "<<count;
}

//Ques-How do you print the first non-repeated character from a string?
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string s="abcabcf";
	bool mask[s.length()];
	for (unsigned int i = 0; i < s.length(); i++)
		mask[i]=true;
	
	//bool flag=true;
	unsigned int i = 0,j=0;
	int counti=1,countj=1;
	for (i = 0; i < s.length(); i++,counti++)
	{
		if(mask[i]){
			for (j = i+1; j < s.length(); j++,countj++)
			{
				if(s[i]==s[j]){mask[i]=false; mask[j]=false;} 
			}
		}
		if(mask[i]){ cout<<s[i]; break;}
	}
	//just to check complexity
	cout<<endl<<"s.length():"<<s.length()<<" counti:"<<counti<<" countj:"<<countj;
}

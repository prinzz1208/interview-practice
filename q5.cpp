//How do you convert a given String into int like the atoi()?
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string s="1234";
	int a[s.length()];
	for (int i = 0; i < s.length(); i++)
		a[i]=s[i]-'0';
	cout<<s;
}

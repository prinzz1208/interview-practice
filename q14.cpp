//How do you design a vending machine?
#include <iostream>
using namespace std;
struct Item
{
	int srno;
	string name;
	float price;
};
Item List[3];

void vendingMachine(float cash,int choice);

int main()
{
	cout<<"List";
	cout<<"\n----";

	cout<<"\n1: Coffee - Rs20";
	cout<<"\n2: Cold Drink - Rs40";
	cout<<"\n3: Tea - Rs10";
	cout<<"\n----\n";
	List[0].name = "Coffee"; List[0].price = 20; List[0].srno = 1;
	List[1].name = "Cold Drink"; List[1].price = 40; List[1].srno = 2;
	List[2].name = "Tea"; List[2].price = 10; List[2].srno = 3;
	cout<<"Enter Your Choice:"; 
	int choice;
	float cash=0.0;
	cin>>choice;	
	cout<<"\nEnter Cash Amount:"; 
	cin>>cash;
	vendingMachine(cash,choice);
	
}
void vendingMachine(float cash,int choice)
{
	if(List[0].srno==choice)
	{
		if(cash>List[0].price) 
			cout<<"Enjoy Your "<<List[0].name<<"!\nRemaining Amount:Rs"<<cash - List[0].price; 
		else
			cout<<"Not enough cash";
	}
	if(List[1].srno==choice)
	{ 
		if(cash>List[1].price) 
			cout<<"Enjoy Your "<<List[1].name<<"!\nRemaining Amount:Rs"<<cash - List[1].price; 
		else
			cout<<"Not enough cash";
	}
	if(List[2].srno==choice)
	{ 
		if(cash>List[2].price) 
			cout<<"Enjoy Your "<<List[2].name<<"!\nRemaining Amount:Rs"<<cash - List[2].price; 
		else
			cout<<"Not enough cash";
	}
}


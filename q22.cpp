//How to add an element at the middle of the linked list?
#include <iostream>
using namespace std;
struct node
{
	int val;
	node* next;
};
int main()
{
	node* head = NULL;
	node* temp = NULL;
	int n = 6,position = 3,key = 0;
	//cout<<"Enter no. of Nodes:";
	//cin>>n;
	for (int i = 1; i<=n; i++)
	{
		node* p = new node;
		p->val = i;
		p->next = NULL;
		if(head == NULL)
		{
			head = p;
			temp = head;
		}else{
			temp->next = p;
			temp = temp -> next;
		}
	}
	cout<<"\n Test";

	temp = head;
	int count=1;
	while (count != (position)-1)
	{
		temp = temp->next;
		count++;		
	}
	node* p = new node;
	p->val = key;
	p->next = temp->next;
	temp->next = p;
	temp = head;
	while(temp != NULL)
	{
		cout<<"\t"<<temp->val;
		temp = temp->next;
	}

}



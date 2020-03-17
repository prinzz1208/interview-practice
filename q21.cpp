//How do you reverse a linked list in place?
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
	node* prev = NULL;
	int n=6;
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
	prev = head;
	while(temp != NULL)
	{
		cout<<"\t"<<temp->val;
		temp = temp->next;
	}
	temp = head;
	temp = temp -> next;
	
	bool first = true;
	while(temp != NULL)
	{
		prev = temp;
		if(temp != NULL){
			temp = temp->next;
			prev->next = head;  
			if(first){
				head->next= NULL;
				head = prev;
				first = false;
			}else
				head = prev;
		}
	}
	temp = head;
	cout<<endl;
	while(temp != NULL)
	{
		cout<<"\t"<<temp->val;
		temp = temp->next;
	}
	
}


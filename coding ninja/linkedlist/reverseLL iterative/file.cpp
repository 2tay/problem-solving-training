#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int data)
	{
		this->data = data;
		this->next = nullptr;
	}
};

node* createll(int n, vector<int> v)
{
	node* head = new node(v[0]);
	node* temp = head;

	for(int i=1; i<n; i++)
	{
		temp->next = new node(v[i]);
		temp = temp->next;
	}

	return head;
}


node* iterativeReverse(node* head)
{
	node *prev, *current, *next;
	prev = next = nullptr;
	current = head;

	while(current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

void printll(node* head)
{
	if(!head)
	{
		cout << "empty linkedList" << endl; 
	}

	while(head)
	{
		cout << head->data << "->";
		head = head->next;
	}
}



int main()
{
	vector<int> v = {1,2,3,4,5};
	int n = v.size();

	node* head = createll(n, v);

	node* shead = iterativeReverse(head);

	printll(shead);
	
	
	return 0;
}
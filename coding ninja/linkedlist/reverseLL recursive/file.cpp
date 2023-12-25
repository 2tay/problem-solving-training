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


void recursiveReverse(node* head, node* &newHead)
{
	if(!head->next)
	{
		newHead = head;
		return;
	}

	recursiveReverse(head->next, newHead);
	head->next->next = head;
	head->next = nullptr;
}



int main()
{
	vector<int> v = {1,2,3,4,5};
	int n = v.size();

	node* head = createll(n, v);
	node* newHead = NULL;

	recursiveReverse(head, newHead);

	node* temp = newHead;

	while(temp)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}

	


	return 0;
}
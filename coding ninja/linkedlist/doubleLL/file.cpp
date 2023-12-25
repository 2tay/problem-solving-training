#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;
	node* previous;

	node(int data)
	{
		this->data = data;
		this->next = this->previous = nullptr;
	}
};

node* doublell(vector<int> v)
{
	node* head = new node(v[0]);
	node* temp = head;
	for(int i=1; i<v.size(); i++)
	{
		temp->next = new node(v[i]);
		temp->next->previous = temp;
		temp = temp->next;
	}

	return head;
}

int main()
{
	vector<int> v = {1,2,3,4};
	int n = v.size();
	int i = 0;

	node* head = doublell(v);

	while(true)
	{
		cout << head->data << "->";
		if(head->next)
		{
			head = head->next;
		}
		else
			break;
	}

	cout << endl;

	while(true)
	{
		cout << head->data << "<-";
		if(head->previous)
		{
			head = head->previous;
		}
		else
			break;
	}

	return 0;
}
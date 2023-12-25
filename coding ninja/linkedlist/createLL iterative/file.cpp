#include <bits/stdc++.h>
using namespace std;

class node{
public : 
	int data;
	node* next;

	node()
	{
		data = 0;
		next = NULL;
	}
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

node* createll(vector<int> v)
{
	node* head = new node(v[0]);
	node* temp = head;

	 for (int i = 1; i < v.size(); i++) // Start the loop from index 1
    {
        temp->next = new node(v[i]);
        temp = temp->next;
    }

	return head;
}

int main()
{
	vector<int> v = {1,2,3,4};
	node* head = createll(v);

	node* temp = head;

	while(temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	return 0;
}
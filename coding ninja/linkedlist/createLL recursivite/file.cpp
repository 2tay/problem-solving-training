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

node* createll(vector<int> v, int i, int n, node* head)
{
	if(i == n)
	{
		return nullptr;
	}

	head = new node(v[i]);
	head->next = createll(v, i+1, n, head);

	return head;
}


int main()
{

	vector<int> v = {1,2,3,4};

	int n = v.size();
	int i = 0;

	node* head = nullptr;

	head = createll(v, i, n, head);

	node* temp = head;
	int count = 0;

	while(temp and count <= n-2)
	{
		cout << temp->data << "->";
		temp = temp->next;

		count++;
	}

	return 0;
}
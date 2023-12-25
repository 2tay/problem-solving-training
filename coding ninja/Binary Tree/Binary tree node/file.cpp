#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* right;
	node* left;

	node(int data)
	{
		this->data = data;
		right = nullptr;
		left = nullptr;
	}
};

int main()
{
	node* root = new node(1);
	node* b = new node(2), *c = new node(3);
	node *d = new node(4), *e = new node(5);
	

	root->left = b;
	root->right = c;
	b->left = c; 
	b->right = d;
	c->right = e;

	cout << root->data << " " << b->data << " " << c->data << " " << d->data << " " << e->data << endl;


	return 0;
}
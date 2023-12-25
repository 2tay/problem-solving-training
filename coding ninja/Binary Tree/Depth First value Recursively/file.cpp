#include <bits/stdc++.h>
using namespace std;

class node{
public:
	char data;
	node *right;
	node *left;

	node(char data)
	{
		this->data = data;
		right = left = nullptr;
	}
};

void depthFirstValue(node *root, vector<node*>& e)
{
	if(root == NULL)
		return;
	e.push_back(root);
	depthFirstValue(root->left, e);
	depthFirstValue(root->right, e);
}

int main()
{
	node *a = new node('a');
	node *b = new node('b');
	node *c = new node('c');
	node *d = new node('d');
	node *e = new node('e');
	node *f = new node('f');

	a->left = b;
	a->right = c;

	b->left = d;
	b->right = e;

	c->right = f;

	vector<node*> v;
	depthFirstValue(a, v);
	
	for(node* v:v)
	{
		cout << v->data << " ";
	}

	return 0;

}
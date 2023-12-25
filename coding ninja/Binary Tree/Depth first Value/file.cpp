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

vector<node*> depthFirstValue(node *root)
{
	vector<node*> stack = {root};
	vector<node*> res;
	while(stack.size())
	{
		int n = stack.size()-1;
		node* current = stack[n];
		res.push_back(current);

		stack.pop_back();
		if(current->right)
			stack.push_back(current->right);
		if(current->left)
			stack.push_back(current->left);
	}

	return res;
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

	vector<node*> v = depthFirstValue(a);
	for(node* v:v)
	{
		cout << v->data << " ";
	}

	return 0;

}
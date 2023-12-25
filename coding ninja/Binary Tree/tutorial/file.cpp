#include <bits/stdc++.h>
using namespace std;
/*
										1
									/       \
								2				3
							/
						4 
*/       

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data)
	{
		this->data = data;
		left = right = NULL;
	}

	node(int data, node* left, node* right)
	{
		this->data = data;
		this->left = left;
		this->right = right;
	}
};

int main()
{
	vector<int> v = {1,2,3,4};
	node* root = new node(1);

	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);

	{
		cout << root->data << "->";
		cout << root->left->data << "->";
		cout << root->left->left->data << endl;

		cout << root->data << "->" << root->right->data << endl;
	}

	return 0;
}
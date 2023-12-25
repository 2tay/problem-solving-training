#include <bits/stdc++.h>
using namespace std;

vector<int> f(int n)
{
	vector<int> e;
	//Base case
	if(n==0)
		return e;
	//recursion funct
	e = f(n-1);
	e.push_back(n);
	return e;
}

int main()
{
	int n;
	cin >> n;

	vector<int> res = f(n);

	for(int x:res)
		cout << x << " ";

	return 0;
}
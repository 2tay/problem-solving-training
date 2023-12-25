#include <bits/stdc++.h>
using namespace std;

void permutation(vector<char>& v, int n, string temp, vector<string>& e)
{
	if(n == 0)
	{
		e.push_back(temp);
		return;
	}

	int count = n;

	while(count--)
	{
		char current = v[0];

		v.erase(v.begin());
		permutation(v, n-1, temp+current, e);

		v.push_back(current);
	}
}

int main()
{
	int n;
	cin >> n;

	vector<char> v(n);

	for(char& v:v)
	{
		cin >> v;
	}

	string temp;
	vector<string> e;

	permutation(v, n, temp, e);

	for(string e:e)
	{
		cout << e << " ";
	}

	return 0;
}
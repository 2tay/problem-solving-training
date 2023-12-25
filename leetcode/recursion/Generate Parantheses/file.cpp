#include <bits/stdc++.h>
using namespace std;

void f(int i, int n, string s, vector<string>& e, int open, int close)
{
	if(i == n)
	{
		e.push_back(s);
		return;
	}

	s[i] = '(';
	if(open < n / 2)
	{
		f(i+1, n, s, e, open+1, close);
	}

	s[i] = ')';
	if(close < open)
	{
		f(i+1, n, s, e, open, close+1);
	}
}

int main()
{
	int n;
	cin >> n;
	n = 2 * n;

	string s(n, '0');
	s[0] = '(';

	int i = 1;
	vector<string> e;

	int open = 1, close = 0;

	f(i, n, s, e, open, close);

	for(string e:e)
	{
		cout << e << endl;
	}

	return 0;
}
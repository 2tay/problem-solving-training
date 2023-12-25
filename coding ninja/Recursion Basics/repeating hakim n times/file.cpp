#include <bits/stdc++.h>
using namespace std;

void f(int n,string s,vector<string> &e)
{
	if(n==0)
		return;
	e.push_back(s);
	return f(n-1,s,e);
}

int main()
{
	int n = 4;
	string s = "hakim";
	vector<string> e;

	f(n,s,e);

	for(string s:e)
	{
		cout << s << " ";
	}

	return 0;
}
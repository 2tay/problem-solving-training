#include <bits/stdc++.h>
using namespace std;

bool compare(string a,string b)
{
	return (a+b) < (b+a);
}

string smallestString(vector<string> v)
{
	sort(v.begin(),v.end(),compare);
	string s;
	for(string v:v)
	{
		s += v;
	}
	return s;
}

int main()
{
	int t;
	cin >> t;
	vector<string> v;
	while(t--)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	string s = smallestString(v);
	cout << s;

	return 0;
}
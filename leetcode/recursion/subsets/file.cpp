#include <bits/stdc++.h>
using namespace std;

void f(int i, int n, string s, vector<int> v, vector<string>& e)
{
	if(i == n)
	{
		e.push_back(s);
		return;
	}

	char c = '0' + v[i];
	f(i + 1, n, s + c, v, e);

	f(i + 1, n, s, v, e);
}

vector<string> subsets(vector<int>& v) {
	int n = v.size();
	vector<string> e;
	int i = 0;
	string s;

	f(i, n, s, v, e);

	return e;
 }

int main()
{

	vector<int> v = {1,2,3};

	vector<string> e = subsets(v);

	for(string e:e)
	{
		cout << e << endl;
	}
	
	cout << e.size() << endl; 

	return 0;
}
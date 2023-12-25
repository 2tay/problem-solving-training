#include <bits/stdc++.h>
using namespace std;

void f(int i,vector<int> v,vector<int> &e,vector<vector<int>> &res)
{
	//Base case
	if(i==v.size())
	{
		res.push_back(e);
		return;
	}
	// recursion 
	e.push_back(v[i]);
	f(i+1,v,e,res);
	e.pop_back();
	f(i+1,v,e,res);
}

int main()
{
	vector<int> v = {1,2,3};
	vector<int> e;
	vector<vector<int>> res;
	f(0,v,e,res);

	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<res[i].size();j++)
		{
			cout << res[i][j];
		}
		cout << " ";
	}

	return 0;
}
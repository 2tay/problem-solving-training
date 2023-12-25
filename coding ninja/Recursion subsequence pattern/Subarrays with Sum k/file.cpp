#include <bits/stdc++.h>
using namespace std;
#define ll long long

void f(int i, int n, ll k, ll sum, vector<int> v, vector<int>& e, vector<vector<int>>& res)
{
	if(i == n)
	{
		if(sum == k)
		{
			res.push_back(e);
		}
		return;
	}

	e.push_back(v[i]);
	f(i + 1, n, k, sum + v[i], v, e, res);

	e.pop_back();
	f(i + 1, n, k, sum, v, e, res);
}

vector<vector<int>> subarraysWithSumK(vector<int> v, long long k) {
    vector<vector<int>> res;
    vector<int> e;
    int n = v.size();
    int i = 0;
    ll sum = 0;

    f(i, n, k, sum, v, e, res);

    return res;
}

int main()
{
	vector<int> v = {1,2,3,1,1,1};
	ll k = 3;

	vector<vector<int>> res = subarraysWithSumK(v, k);

	for(int i = 0; i < res.size(); i++)
	{
		for(int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
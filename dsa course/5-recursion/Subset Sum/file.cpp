#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int i, int n, int k, int sum, vector<int> v)
{
	if(i == n)
	{
		if(k == sum)
			return true;

		return false;
	}

	if( subsetSum(i + 1, n, k + v[i], sum, v) )
		return true;
	if( subsetSum(i + 1, n, k, sum, v) )
		return true;

	return false;
}

int main()
{
	vector<int> v = {10,12,15,6,19,20};
	int n = v.size();
	int sum = 16;

	int i = 0, k = 0;

	bool res = subsetSum(i, n, k, sum, v);

	cout << res;

	return 0;
}
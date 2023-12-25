#include <bits/stdc++.h>
using namespace std;

bool f(int i, int n, int k, int sum, vector<int> v)
{
	if(i == n)
	{
		if(sum == k)
			return true;

		return false;
	}

	if( f(i + 1, n, k, sum + v[i], v) )
	{
		return true;
	}

	if( f(i + 1, n, k, sum, v) )
	{
		return true;
	}

	return false;
}

bool isSubsetPresent(int n, int k, vector<int> v)
{
    int i = 0;
    int sum = 0;

    bool res = f(i, n, k, sum, v);

    return res;
}

int main()
{
	vector<int> v = {1,2,1};
	int n = v.size();
	int k = 2;

	bool res = isSubsetPresent(n, k, v);

	cout << res;

	return 0;
}
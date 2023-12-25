#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> housing(int n,vector<int> v,int target)
{
	vector<vector<int>> res;
	vector<int> pairs(2);
	int sum = v[0];
	for(int i=0,j=i+1;i<n-1,j<n;)
	{
		sum += v[j];
		if(sum < target)
		{
			j++;
		}
		else if(sum == target)
		{
			pairs[0] = i;
			pairs[1] = j;
			res.push_back(pairs);
			sum -= v[i];
			i++;
			j++;
		}
		else{
			sum -= v[i];
			i++;
			sum -= v[j];
		}
	}
	return res;
}

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for(auto &v:v)
	{
		cin >> v;
	}

	int target;
	cin >> target;

	vector<vector<int>> res = housing(n,v,target);

	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<res[i].size();j++)
		{
			cout << res[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}
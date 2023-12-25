#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int target)
{
	int s = 0;
	int e = v.size()-1;
	int mid;
	while(s<=e)
	{
		mid = (s+e)/2;
		if(v[mid] == target)
			return mid;
		else if(v[mid] > target)
		{
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	// target doesn't exist int the vector return -1
	return -1;
}

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for(int &v:v)
	{
		cin >> v;
	}

	int target;
	cin >> target;

	int res = binarySearch(v,target);
	
	if(res == -1)
		cout << "the target doesn't exist";
	else
		cout << "the index is : " << res;

	return 0;
}
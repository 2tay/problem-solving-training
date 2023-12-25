#include <bits/stdc++.h>
using namespace std;

int frequencyCount(vector<int> v,int key)
{
	int count = 0;
	int s = 0;
	int e = v.size()-1;
	while(s<=e)
	{
		if(v[s] == key)
		{
			while(v[s] == key)
			{
				count++;
				s++;
			}
			break;
		}
		else if(v[e] == key)
		{
			while(v[e] == key)
			{
				count++;
				e--;
			}
			break;
		}

		int mid = (s+e)/2;

		if(v[mid] == key)
		{
			count++;
			int right = mid+1 , left = mid-1;
			while(v[right] == key and right<=e)
			{
				count++;
				right++;
			}
			while(v[left] == key and left >= s)
			{
				count++;
				left--;
			}
			break;
		}
		else if(v[mid] > key)
		{
			e = mid-1;
			while(v[e] == v[mid])
			{
				e--;
			}
		}
		else{
			s = mid+1;
			while(v[s] == v[mid])
			{
				s++;
			}
		}

	}

	return count;
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

	int key;
	cin >> key;

	int result = frequencyCount(v,key);
	cout << "Frequency of " << key << " is: " << result << endl;

	return 0;
}
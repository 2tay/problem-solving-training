#include <bits/stdc++.h>
using namespace std;

int index1(vector<int> v)
{
	int a = 0 , b = v.size()-1;
	int x = (a+b)/2;
	while(v[x] > v[x-1] and a >= b)
	{
		if(v[x] > v[0])
		{
			a = x+1;
		}
		else if (v[x] < v[0])
		{
			b = x-1;
		}
		x = (a+b)/2;
	}
	return x;
}

int rotated(vector<int> v,int k)
{
	int indexP = index1(v);
	int a,b,x;
	if(k > v[v.size()-1])
	{
		a = indexP;
		b = v.size()-1;
	}
	else if(k < v[v.size()-1])
	{
		a = 0;
		b = indexP-1;
	}
	while(a<=b)
	{
		x = (a+b)/2;
		if(v[x] > k)
		{
			b = x-1;
		}
		else if(v[x] < k )
		{
			a = x+1;
		}
		else{
			return x;
		}
	}
	return a;
}

int main()
{
	vector<int> v = {4,5,6,7,8,9,10,11,12,1,2,3};
	int k = 4;

	int res = rotated(v,k);
	cout << res;

	

	return 0;
}
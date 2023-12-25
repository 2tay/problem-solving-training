#include <bits/stdc++.h>
using namespace std;

int sortByPivot(vector<int> &v,int s,int e)
{
	int p = e;
	int i = s-1;
	int j = s;
	for(;j<e;)
	{
		if(v[j] < v[p])
		{
			i++;
			swap(v[j],v[i]);
		}
		j++;
	}
	swap(v[p],v[i+1]);
	p = i+1;
	return p;
}

void quickSort(vector<int> &v,int s,int e,int k)
{
	//base case
	if(s>=e)
		return;
	else
	{
		int p = sortByPivot(v,s,e);
		if(p<(k-1))
			quickSort(v,p+1,e,k);
		else if(p>(k-1))
			quickSort(v,s,p-1,k);
		else
			return;
	}
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
	int k;
	cin >> k;

	int s = 0;
	int e = n-1;

	quickSort(v,s,e,k
		);
	cout << v[k-1];


	return 0;
}
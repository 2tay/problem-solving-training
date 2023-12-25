#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v,int s,int e)
{
	int mid = (e+s)/2;
	int i = s , j = mid+1;
	vector<int> temp;
	while(i<=mid and j<=e)
	{
		if(v[i] < v[j])
		{
			temp.push_back(v[i]);
			i++;
		}
		else{
			temp.push_back(v[j]);
			j++;
		}
	}
	while(i<=mid)
	{
		temp.push_back(v[i++]);
	}
	while(j<=e)
	{
		temp.push_back(v[j++]);
	}
	int k=0;
	for(int i=s;i<=e;i++)
	{
		v[i] = temp[k++];
	}
	return;
}

void mergeSort(vector<int> &v,int s,int e)
{
	int count = 0;
	// base case
	if(s>=e)
		return;
	else
	{
		int mid = (s+e)/2;
		mergeSort(v,s,mid);
		mergeSort(v,mid+1,e);
		return merge(v,s,e);
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(int &x:v)
	{
		cin >> x;
	}
	int s = 0;
	int e = n-1;
	mergeSort(v,s,e);
	for(int v:v)
	{
		cout << v << " ";
	}

	return 0;
}
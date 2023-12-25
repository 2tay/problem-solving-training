#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v,int s,int e,int &count)
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
			count += mid+1-i;
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

void mergeSort(vector<int> &v,int s,int e,int &count)
{
	// base case
	if(s>=e)
		return;
	else
	{
		int mid = (s+e)/2;
		mergeSort(v,s,mid,count);
		mergeSort(v,mid+1,e,count);
		return merge(v,s,e,count);
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
	int count = 0;
	mergeSort(v,s,e,count);
	for(int v:v)
	{
		cout << v << " ";
	}
	cout << endl;

	cout << count << endl;

	return 0;
}
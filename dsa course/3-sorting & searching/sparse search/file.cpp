#include <bits/stdc++.h>
using namespace std;

int findMid(vector<string> v,int s,int e)
{
	int mid = (s+e)/2;
	int r = mid+1;
	int l = mid-1;
	while(v[r]!="" and v[l]!="")
	{
		r++;
		l--;
	}
	if(v[r]!="")
		return r;
	else
		return l;
}

int sparseSearch(vector<string> v,int s,int e,string target)
{
	//base case
	if(s>=e)
		return s;
	else{
		int mid = findMid(v,s,e);
		if(v[mid] > target)
			sparseSearch(v,s,mid-1,target);
		else if(v[mid] < target)
			sparseSearch(v,mid+1,e,target);
		else
		{
			s = mid;
			e = mid;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	vector<string> v(n);
	for(string &s:v)
	{
		getline(cin,s);
	}

	string target;
	cin >> target;

	int s=0,e=n-1;

	int index = sparseSearch(v,s,e,target);
	cout << v[index];

	
	return 0;
}
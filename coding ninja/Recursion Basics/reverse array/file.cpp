#include <bits/stdc++.h>
using namespace std;

int i = 0;

vector<int> reverse(int n, vector<int> &v)
{
	if(i > (n-1)/2)
		return v;
	swap(v[i] , v[(n-1)-i]);
	i++;
	return reverse(n,v);
}

int main()
{
	int n = 6;
	vector<int> v = {6,5,4,3,2,1}; 
	vector<int> e;

	e = reverse(n,v);

	for(int e:e)
	{
		cout << e << " ";
	}


	return 0;
}
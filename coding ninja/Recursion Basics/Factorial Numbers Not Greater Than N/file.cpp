#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(int cnt)
{
	if(cnt==1 or cnt==0)
	{
		return 1;
	}
	return cnt*fact(cnt-1);
}

vector<ll> f(int n,vector<ll> &e,int cnt)
{
	if(n==0 or n==1)
	{
		return e;
	}
	else if(fact(cnt) > n)
	{
		return e;
	}

	else if(fact(cnt) <= n)
	{
		e.push_back(fact(cnt));
		cnt++;
		e = f(n,e,cnt);
		return e;
	}
}

int main()
{
	int n;
	cin >> n;

	vector<ll> e={1};
	int cnt = 2;

	vector<ll> res = f(n,e,cnt);

	for(auto x:res)
	{
		cout << x << " ";
	}

	return 0;
}
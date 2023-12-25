#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumFirstN(ll n) {
    //Base Case
    if(n==0)
        return 0;
    // recursion funct
    return n+sumFirstN(n-1);
}

int main()
{
	ll n;
	cin >> n;

	ll res = sumFirstN(n);

	cout << res;

	return 0;
}
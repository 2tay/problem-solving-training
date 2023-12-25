#include <bits/stdc++.h>
using namespace std;

int ladders(int n)
{
	int res;
	//base case
	if(n==0 or n==1)
		return 1;

	if(n==2)
		return 2;
	
	//Recursion
	return ladders(n-1)+ladders(n-2)+ladders(n-3);

}

int main()
{
	int n;
	cin >> n;
	
	int res = ladders(n);

	cout << res << endl;

	return 0;
}
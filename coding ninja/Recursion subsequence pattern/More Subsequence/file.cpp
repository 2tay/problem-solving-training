#include <bits/stdc++.h>
using namespace std;

int f(int i, int n, string s, string temp, unordered_set<string>& myset)
{
	int count = 0;
	if(i == n)
	{
		cout << temp << endl;
		myset.insert(temp);
		
		return myset.size();
	}

	count = f(i + 1, n, s, temp + s[i], myset);
	count = f(i + 1, n, s, temp, myset);

	return count;
}

string moreSubsequence(int n, int m, string a, string b)
{
    int i = 0;
    string temp;
    unordered_set<string> myset;
    
    int count1 = f(i, n, a, temp, myset);
    myset.clear();
    int count2 = f(i, m, b, temp, myset);

    cout << "count1 : " << count1 << endl;
    cout << "count2 : " << count2 << endl;

    if(count1 >= count2)
    	return a;
    else
    	return b;
}

int main()
{
	string a, b;
	cin >> a >> b;

	int n = a.size(), m = b.size();

	string res = moreSubsequence(n, m, a, b);

	cout << res;

	return 0;
}
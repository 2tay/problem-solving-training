#include <bits/stdc++.h>
using namespace std;

string uniqueSubstring(string s)
{
	int n = s.size();
	unordered_set<char> sc;
	int count = 0,maxCount = 0;
	int start=0;
	vector<int> index(2);
	for(int i=0;i<n;i++)
	{
		if(sc.count(s[i]))
		{
			if(count > maxCount)
			{
				maxCount = count;
				index[0] = start;
				index[1] = i-1;
			}
			count = 0;
			sc.clear();
			start = i;
		}
		else{
			sc.insert(s[i]);
			count++;
		}
	}
	string res;
	for(int i=index[0];i<=index[1];i++)
	{
		res+= s[i];
	}
	return res;
}

int main()
{
    string s;
    cin >> s;
    string res = uniqueSubstring(s);
    cout << res;
	return 0;
}
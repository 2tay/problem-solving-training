		// s1 = fizzbuzz
		// s2 = fuzz
		// output : fizzbu


#include <bits/stdc++.h>
using namespace std;

string stringWindow(string s1,string s2)
{
	multimap<char,int> m;
	for(int i=0;i<s1.size();i++)
	{
		m.insert({s1[i],i});
	}
	int imax = INT_MIN ,imin =INT_MAX;

	for(int i=0;i<s2.size();i++)
	{
		auto range = m.equal_range(s2[i]);
		if (range.first != range.second)
		{
			auto it = range.first;
			int x = it->second;
			if(x>imax)
				imax = x;
			if(x<imin)
				imin = x;
			m.erase(it);
		}
	}

	string res;
	for(int i=imin;i<=imax;i++)
	{
		res += s1[i];
	}
	
	return res;
}

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	string res = stringWindow(s1,s2);
	cout << res;
	return 0;
}
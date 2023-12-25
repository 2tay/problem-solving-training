#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1 = "aac" , s2 = "acc";
	unordered_map<char,int> m1 , m2;

	for(int i=0;i<s1.size();i++)
	{
		m1[s1[i]]++;
		m2[s2[i]]++;
	}

	for(auto m:m1)
	{
		cout << m.first << "->" << m.second << " ";
	}

	cout << endl;
	
	for(auto m:m2)
	{
		cout << m.first << "->" << m.second << " ";
	}

	if(m1 == m2)
		cout << "YEEES";
	else
		cout << "NOOOO";
	

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void remove(string &s)
{
	string res;
	
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9'))
		{
			if(isupper(s[i]))
			{
				s[i] = tolower(s[i]);
			}
			res += s[i];
		}
	}
	s = res;
}

int i = 0;
bool flag = true;

bool reverse(string &s)
{
	if(flag)
	{
		remove(s);
		flag = false;
	}
	
	if(s.size()==0 or s.size()==1)
		return true;
	else if(i > (s.size()-1)/2)
		return true;
	else{
		if(s[i] == s[(s.size()-1)-i])
		{
			i++;
			return reverse(s);
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	string s;
	getline(cin,s);

	bool res = reverse(s);
	if(res)
		cout << "true";
	else
		cout << "false";

	return 0;
}

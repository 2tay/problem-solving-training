#include<bits/stdc++.h>
using namespace std;

string removeSpaceSign(string s, bool &sign, bool &positive)
{
	string res;
	for(int i=0;i<s.size();)
	{
		while(s[i] == ' ')
			i++;

		if(s[i] == '-' or s[i] == '+')
		{
			sign = true;
			if(s[i] == '-')
				positive = false;
			i++;
		}

		while(s[i] == '0')
			i++;

		while(s[i]>='0' and s[i]<='9')
		{
			res += s[i];
			i++;
		}

		return res;
	}
}

bool flag = true;

int myAtoi(int i, string &s, bool sign, bool positive, int &n)
{
	if(flag)
	{
		s = removeSpaceSign(s, sign, positive);
		flag = false;
		n = s.size();
	}

	if(n == 0)
	{
		return 0;
	}
	else if(n >= 10)
	{
		if(positive)
			return pow(2,31)-1;
		else
			return -pow(2,31);
	}
	//Base case
	else if(i == n)
		return 0;

	int res = myAtoi(i+1, s, sign, positive, n);
	res += (s[i]-'0') * pow(10,(n-1-i));

	if(i==0 and sign and !positive)
		res = -res;

	return res;
}

int createAtoi(string s)
{
	bool sign = false, positive = true;
	int i = 0;
	int n = 0;
	
	int res = myAtoi(i, s, sign, positive, n);

	return res;
}

int main()
{
	string s;
	cin >> s;

	int res = createAtoi(s);

	cout << res;

	return 0;
}
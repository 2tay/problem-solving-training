#include <bits/stdc++.h>
using namespace std;

void keypad(vector<vector<char>> v, string s, string temp, int i, vector<string>& e)
{
	if(i == s.size())
	{
		e.push_back(temp);
		return;
	}

	if(s[i] > '1')
	{
		keypad(v, s, temp + v[s[i] - '0'][0], i + 1, e);
		keypad(v, s, temp + v[s[i] - '0'][1], i + 1, e);
		keypad(v, s, temp + v[s[i] - '0'][2], i + 1, e);
		if(v[s[i] - '0'].size() >= 4)
		{
			keypad(v, s, temp + v[s[i] - '0'][3], i + 1, e);
		}
	}
	else
	{
		keypad(v, s, temp , i + 1, e);
	}
}

int main()
{
    vector<vector<char>> v = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    
    int n;
    cin >> n;

    string s = to_string(n);

    int i = 0;
    vector<string> e;
    string temp;

    keypad(v, s, temp, i, e);

    for(string e:e)
    {
    	cout << e << " ";
    }

    return 0;
}

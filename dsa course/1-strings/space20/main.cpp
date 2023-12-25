#include <bits/stdc++.h>
using namespace std;

string space20(string s)
{
    int space = 0;
    for(char c:s)
    {
        if(c==' ')
            space++;
    }
    space *= 2;
    s.resize(s.size()+space);
    int j = s.size()-1 + space;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            s[j--] = s[i];
        }
        else{
            s[j--] = '0';
            s[j--] = '2';
            s[j--] = '%';
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin , s);
    string res = space20(s);
    cout << res;
    return 0;
}



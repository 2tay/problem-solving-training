#include <bits/stdc++.h>
using namespace std;

bool checkSubset(string s1,string s2)
{
    unordered_set<char> s;
    for(char c:s1)
    {
        s.insert(c);
    }

    int n = s.size();

    for(char c:s2)
    {
        s.insert(c);
    }

    if(n == s.size())
        return true;
    else
        return false;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    bool check = checkSubset(s1,s2);
    cout << check;
    return 0;
}

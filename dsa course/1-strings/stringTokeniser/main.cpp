#include<bits/stdc++.h>
using namespace std;

vector<string> tokeniser(string s)
{
    vector<string> v;
    int i0 = 0;
    for(int i=0;i<s.size();)
    {
        string temp;
        while(s[i] != ' ')
        {
            temp.push_back(s[i]);
            i++;
        }
        v.push_back(temp);

        while(s[i] == ' ')
        {
            i++;
        }
    }
    return v;
}

int main()
{
    string s;
    getline(cin,s);
    vector<string> v = tokeniser(s);
    for(string v:v)
    {
        cout << v << ",";
    }
    return 0;
}

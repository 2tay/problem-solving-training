/*
    codingminutes
    cine
    ---> yees
*/
#include<bits/stdc++.h>
using namespace std;

bool checkSubset(string s1,string s2)
{
    for(int i=0;i<s2.size();i++)
    {
        bool flag = false;

        for(int j=0;j<s1.size();j++)
        {
            if(s2[i] == s1[j])
            {
                flag = true;
                break;
            }
        }

        if(!flag)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << checkSubset(s1,s2);
    return 0;
}

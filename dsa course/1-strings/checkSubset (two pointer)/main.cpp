#include<bits/stdc++.h>
using namespace std;

bool checkSubset(string s1,string s2)
{
    int i1=0,i2=0;
    while(i2<s2.size() and i1<s1.size())
    {
        if(s1[i1] == s2[i2])
        {
            i2++;
            i1++;
        }
        else{
            i1++;
        }
    }
    if(i2 == s2.size())
        return true;
    else
        return false;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(checkSubset(s1,s2))
        cout << "yeees match!";
    else
        cout << "doesn't match";
    return 0;
}

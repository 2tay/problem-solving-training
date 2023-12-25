#include <bits/stdc++.h>
using namespace std;

int longestBand(int n,vector<int> v)
{
    int res = 0;
    set<int> s;
    for(int v:v)
    {
        s.insert(v);
    }
    for(auto it=s.begin();it!=s.end();++it)
    {
        int cnt = 1;
        auto tempIt = it;
        while(*it == (*(tempIt--))+1)
        {
            cnt++;
            it++;
            tempIt = it;
        }
        res = max(res,cnt);
    }

    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &v:v)
    {
        cin >> v;
    }
    int longest = longestBand(n,v);
    cout << longest;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(int n,vector<int> a,int sum)
{
    vector<int> t(n);
    unordered_map<int,vector<int>> m;
    for(int i=0;i<n;i++)
    {
        t[i] = sum - a[i];
    }
    for(int i=0;i<n;i++)
    {
        unordered_set<int> s;
        for(int j=i;j<n;j++)
        {
            int temp = t[i] - a[j];
            vector<int> res;
            if(s.count(temp))
            {
                res[0] = i;
                res[1] = temp;
                res[2] = a[j];
                m[i].push_back(res[0]);
                m[i].push_back(res[1]);
                m[i].push_back(res[2]);
            }
            s.insert(a[j]);
        }
    }
    vector<vector<int>> res;
    for(auto x:m)
    {
        res.push_back(x.second);
    }
    return res;
}



int main(){
    int n,s;
    vector<int> a(n);
    cin >> n >> s;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<vector<int>> res = triplets(n,a,s);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

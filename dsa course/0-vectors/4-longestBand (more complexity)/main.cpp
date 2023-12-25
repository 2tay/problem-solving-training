#include<bits/stdc++.h>
using namespace std;

int longestBand(int n,vector<int> v)
{
    sort(v.begin(),v.end());
    int total = 0;
    for(int i=1;i<n;i++)
    {
        int cnt = 1;
        while(v[i] == v[i-1]+1)
        {
            i++;
            cnt++;
        }
        total = max(total,cnt);
    }

    return total;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int longest = longestBand(n,v);
    cout << longest;
    return 0;
}

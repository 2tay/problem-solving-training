#include <bits/stdc++.h>
using namespace std;

int rains(int n,vector<int> v)
{
    int res = 0;
    int a = 0,b;
    for(b=1;b<n;)
    {
        int cnt = 1;
        int temp = a;
        while(v[temp]>v[b])
        {
            temp = b;
            cnt++;
            b++;
        }
        while(v[b]>v[temp])
        {
            temp = b;
            cnt++;
            b++;
        }
        int minab = min(a,b);
        while(a<b)
        {
            if( (minab - v[a+1]) > 0)
                res += minab + v[++a];
        }
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
    int res = rains(n,v);
    cout << res;
    return 0;
}

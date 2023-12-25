#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod ( (int)(1e9+7) )
int main(){
    int n;
    cin >> n;
    int a,b,res;
    a = b = 1;
    for(int i=1;i<=n;i++)
    {
        a *= 27;
        if(a>=mod)
        {
            a %= mod;
        }
        b *= 7;
        if(b >=mod)
        {
            b %= mod;
        }
    }
    res = (a-b)%mod;
    cout << res;
    return 0;
}

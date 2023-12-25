#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll myPow(int x, ll n)
{
    //Base case
    if(n==0) return 1;
    if(n == 1)
        return x;

    ll half = myPow(x, n/2);
    ll res = half * half;

    if(n % 2 == 1)
        res *= x;

    return res;
}

int countGoodNumbers(ll n)
{
    ll mod = myPow(10,9) + 7;

    ll evenNums = myPow(5, n - n/2) % mod;
    ll oddNums = myPow(4, n/2) % mod;

    ll res = (evenNums * oddNums) % mod;
    return (int)res;
}

int main() {
    ll n;
    cin >> n;

    int res = countGoodNumbers(n);

    cout << res;
    

    return 0;
}

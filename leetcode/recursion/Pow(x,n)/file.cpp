#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
        if (n == 0)
            return 1;

        // Handle negative exponents and convert n to long long
        long long N = n;
        if (n < 0) {
            x = 1 / x;
            N = -N;
        }

        double half = myPow(x, N / 2);
        
        if (N % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
}

int main()
{
    double x;
    int n;

    cin >> x >> n;

    double res = myPow(x,n);

    cout << res << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int step, mod;
    while (cin >> step >> mod)
    {
        vector<int> f(mod);
        set<int> s;

        f[0] = 0;
        s.insert(f[0]);

        for (int i = 1; i < mod; i++)
        {
            f[i] = (f[i - 1] + step) % mod;
            s.insert(f[i]);
        }

        if (s.size() == mod)
        {
            cout << setw(10) << step << setw(10) << mod << "    Good Choice" << endl;
        }
        else
        {
            cout << setw(10) << step << setw(10) << mod << "    Bad Choice" << endl;
        }

        cout << endl; // Blank line after each test set
    }
    return 0;
}

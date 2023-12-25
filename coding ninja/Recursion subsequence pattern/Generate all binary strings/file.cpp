#include <iostream>
#include <vector>
using namespace std;

void f(int i, int n, string s, vector<string> &e)
{
    if (i == n)
    {
        e.push_back(s);
        return;
    }

    // Append '0' to the string and recurse
    f(i + 1, n, s + '0', e);

    // Append '1' to the string and recurse
    f(i + 1, n, s + '1', e);
}

vector<string> generateAllBinaryStrings(int n)
{
    int i = 0;
    vector<string> e;
    string s;

    f(i, n, s, e);

    return e;
}

int main()
{
    int n;
    cin >> n;

    vector<string> res = generateAllBinaryStrings(n);

    for (string s : res)
    {
        cout << s << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int n1 = a.size();
    int n2 = b.size();
    int n = n1 + n2 -1;
    vector<int> v(n,0);
    int c = 0;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            v[j+c] += ((int)b[i]-48) * ((int)a[j]-48);
        }
        c++;
    }

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>=10)
        {
            int temp = v[i]/10;
            v[i] = v[i]%10;
            v[i-1] += temp;
        }
    }

    bool printStarted = false; // To skip leading zeros
    for(int num : v)
    {
        if (num != 0 || printStarted)
        {
            cout << num;
            printStarted = true;
        }
    }

    return 0;
}

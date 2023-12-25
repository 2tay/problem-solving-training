#include <bits/stdc++.h>
using namespace std;

vector<int> subarray(int n,vector<int> v)
{
    int a = 0,b;
    vector<int> res;
    for(b=1;b<n;)
    {
        while(v[a] < v[b])
        {
            a++;
            b++;
        }
        while(v[a]>v[b])
        {
            b++;
        }
        res[0] = a;
        res[1] = b-1;
        return res;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &v:v)
    {
        cin >> v;
    }

    for(int x:subarray(n,v))
    {
        cout << x << " ";
    }
    return 0;
}

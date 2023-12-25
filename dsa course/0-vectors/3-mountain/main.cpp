#include <bits/stdc++.h>
using namespace std;

int mountain(int n,vector<int> v){
    int a=0,b=1;
    int count = 0;
    while(b<n)
    {
        int up=1,down=0;
        while(v[a]<v[b])
        {
            a = b++;
            up++;
        }
        while(v[b]<v[a])
        {
            a = b++;
            down++;
        }
        if(count < (up+down))
            count = (up+down);
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &v:v)
    {
        cin >> v;
    }
    int res = mountain(n,v);
    cout << res;
    return 0;
}

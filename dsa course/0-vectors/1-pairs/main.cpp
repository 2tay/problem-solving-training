#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    cin >> n >> target;
    vector<int> v(n);
    vector<int> res(2);
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        int temp = target - v[i];
        if(s.count(temp))
        {
            res[0] = temp;
            res[1] = v[i];
            cout << res[0] << " " << res[1] << endl;
            return 0;
        }
        s.insert(v[i]);
    }
    cout << "not FOund" << endl;
    return 0;
}

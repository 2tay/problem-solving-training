#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        string s1 = s;

        bool flag = true;
        int max = stoi(s);
        int count =0;

        while(flag)
        {
            char temp = s[0];
            s.erase(0, 1);
            s += temp;
            count++;

            if(max < stoi(s))
                max = stoi(s);
            if(s == s1)
                flag = false;
        }

        count = k*(count-1) + (k-1);
    cout << count << endl;
    }
    return 0;
}

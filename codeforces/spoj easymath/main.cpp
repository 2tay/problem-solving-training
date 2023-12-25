#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,m,a,b;
        cin >> n >> m >> a >> b;
        vector<int> v = {a,a+b,a+2*b,a+3*b,a+4*b};
        int count = 0;
        while(n<=m){
            int i=0;
            bool flag = false;
            while(n>=v[i] && i<v.size()){
                if(n%v[i] == 0){
                    flag = true;
                    break;
                }
                i++;
            }
            if(flag == false)
                count++;
            n++;
        }
        cout << count << endl;
    }
    return 0;
}

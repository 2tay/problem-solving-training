#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,value;
    while(cin >> n >> m >> value)
    {
        if(n==0 && m==0 && value==0)
            break;
        bool fardi = abs(n-m)%2;
        int r,c;
        r = n-8+1;
        c = m-8+1;
        int total,counter=0;
        if(r >= 0 && c >= 0)
        {
            total = r*c;
            if(fardi)
            {
                if(value == 1)
                    counter = total/2;
                else
                    counter = (total/2) +(total%2);
            }
            else{
                if(value == 1)
                    counter = (total/2) +(total%2);
                else
                    counter = total/2;
            }
        }
        cout << counter;
    }
    return 0;
}


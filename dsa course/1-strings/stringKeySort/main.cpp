#include <bits/stdc++.h>
using namespace std;

string token(string s,int key)
{
    int index = 0;
    key--;
    while(index<s.size() && key>0)
    {
        if(s[index] == ' ')
        {
            key--;
        }
        index++;
    }
    string word;
    while(index < s.size() && s[index]!=' ')
    {
        word += s[index];
        index++;
    }
    return word;
}

vector<string> tokens(vector<string> v,int key)
{
    vector<string> res;
    for(string s:v)
    {
        string word = token(s,key);
        res.push_back(word);
    }
    return res;
}

bool numeric(string& a,string& b)
{
    int A = stoi(a);
    int B = stoi(b);
    return A<B;
}

vector<string> stringKeySort(vector<string> v,int key,int rev,string type)
{
    vector<string> res = tokens(v,key);
    if(type == "lexique")
    {
        if(!rev)
        {
            sort(res.begin(),res.end());
        }
        else{
            sort(res.rbegin(),res.rend());
        }
    }
    else{
        if(!rev)
        {
            sort(res.begin(),res.end(),numeric);
        }
        else{
            sort(res.rbegin(),res.rend(),numeric);
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    vector<string> v;
    while(t--)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }

    int key;
    int rev;
    string type;

    cin >> key >> rev >> type;

    vector<string> res = stringKeySort(v,key,rev,type);

    for(string r:res)
    {
        cout << r << " ";
    }

    return 0;
}

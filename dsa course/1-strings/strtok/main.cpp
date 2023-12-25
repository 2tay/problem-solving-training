#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[] = "hello world !";
    char* tok = strtok(s," ");
    tok = strtok(NULL," ");
    cout << tok;
    return 0;
}

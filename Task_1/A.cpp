#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 1;
    int mx = 1;
    for(int i = 0; i < s.size()-1;i++)
    {
        if(s[i] == s[i+1])
        {
            cnt ++;
        }
        else
        {
            cnt = 1;
        }
        if(cnt > mx)
        mx = cnt;
    }
    cout << mx <<"\n";
    return 0;
}
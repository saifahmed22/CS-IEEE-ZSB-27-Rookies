#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x ,  n , q , w , a;
    cin >> x >> n;
    vector <int> v1;
    vector <int> v2 (n,0);
    for(int i = 1; i <= n;i++)
    {
        cin >> a;
        v1.push_back(a); 
    }
    cin >> q;
    int p;
    w = x;
    for(int i = 1; i <= q;i++)
    {
        cin >> p;
        if(v2[p-1] == 0)
        {
            w += v1[p-1];
            v2[p-1] = 1;
        }
        else
        {
            w -= v1[p-1];
             v2[p - 1] = 0;
        }
        cout << w << "\n";
    }
    return 0;
}
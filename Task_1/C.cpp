#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int cnt = 1;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i + 1 < x; i++)
    {
        if (v[i] != v[i+1])
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO\n";
        return 0;
    }

    long long target = sum / 2;
    long long remaining = target;

    vector<long long> v1;
    vector<long long> v2;

    for (long long i = n; i > 0; i--)
    {
        if (remaining >= i)
        {
            v1.push_back(i);
            remaining -= i;
        }
        else
        {
            v2.push_back(i);
        }
    }

    cout << "YES\n";

    cout << v1.size() << "\n";
    for (long long i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << "\n";

    cout << v2.size() << "\n";
    for (long long i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    cout << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    stack <int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
   {
      while(!st.empty() && v[st.top()] >= v[i])
      {
        st.pop();
      }
      if(st.empty())
      cout << "0";
      else
      cout << st.top() << " ";

      st.push(i);
    }
    return 0;
}
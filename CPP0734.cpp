#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int n, m;
int solve(int x[])
{
    int res = INT_MIN;
    stack<int> st;
    int i = 0;
    while (i < m)
    {
        if (st.empty() || x[st.top()] <= x[i])
        {
            st.push(i++);
        }
        else
        {
            int top = st.top();
            st.pop();
            if (st.empty())
            {
                res = max(res, x[top] * i);
            }
            else
            {
                res = max(res, x[top] * (i - st.top() - 1));
            }
        }
    }
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        if (st.empty())
        {
            res = max(res, x[top] * i);
        }
        else
        {
            res = max(res, x[top] * (i - st.top() - 1));
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int tmp[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0)
                {
                    tmp[i][j] = a[i][j];
                }
                else if (!a[i][j])
                {
                    tmp[i][j] = 0;
                }
                else
                {
                    tmp[i][j] = tmp[i - 1][j] + 1;
                }
            }
        }
        int res = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            res = max(res, solve(tmp[i]));
        }
        cout << res << endl;
    }
}

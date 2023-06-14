#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int n;
int a[105][105];
void in2()
{
    stack<int> st;
    int hangdau = 2;
    int hangcuoi = 4 * n;
    int cotdau = 1;
    int cotcuoi = 4 * n - 1;
    while (hangdau < hangcuoi && cotdau < cotcuoi)
    {
        foru(i, hangdau - 1, hangcuoi)
        {
            st.push(a[i][cotdau]);
        }
        cotdau += 2;
        foru(i, cotdau - 1, cotcuoi)
        {
            st.push(a[hangcuoi][i]);
        }
        hangcuoi -= 2;
        ford(i, hangcuoi + 1, hangdau)
        {
            st.push(a[i][cotcuoi]);
        }
        cotcuoi -= 2;
        ford(i, cotcuoi + 1, cotdau)
        {
            st.push(a[hangdau][i]);
        }
        hangdau += 2;
    }
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << endl;
}
void in1()
{
    stack<int> st;
    int hangdau = 1;
    int hangcuoi = 4 * n - 1;
    int cotdau = 2;
    int cotcuoi = 4 * n;
    while (hangdau < hangcuoi && cotdau < cotcuoi)
    {
        ford(i, hangcuoi + 1, hangdau)
        {
            st.push(a[i][cotcuoi]);
        }
        cotcuoi -= 2;
        ford(i, cotcuoi + 1, cotdau)
        {
            st.push(a[hangdau][i]);
        }
        hangdau += 2;
        foru(i, hangdau - 1, hangcuoi)
        {
            st.push(a[i][cotdau]);
        }
        cotdau += 2;
        foru(i, cotdau - 1, cotcuoi)
        {
            st.push(a[hangcuoi][i]);
        }
        hangcuoi -= 2;
    }
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << endl;
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
        int cnt = 1;
        cin >> n;
        for (int i = 1; i <= 4 * n; i++)
        {
            for (int j = 1; j <= 4 * n; j++)
            {
                a[i][j] = cnt++;
            }
        }
        in1();
        in2();
    }
}

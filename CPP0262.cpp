#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void solve(ll n, ll m)
{
    // tính tổng các số từ 1 đến n lưu vào biến sum
    // rồi chia làm 2 tập (giải hệ phương trình)
    // t1 - t2 = m
    // t1 + t2 = sum
    // hệ vô nghiệm khi m > sum và t1 hoặc t2 bị lẻ
    // xét nguyên tố cùng nhau của 2 tập (gcd(t1,t2)==1)
    ll sum = n * (n + 1) / 2;
    if (m > sum || (sum + m) % 2 == 1)
    {
        cout << "No" << endl;
        return;
    }
    ll t1 = (sum + m) / 2;
    ll t2 = sum - t1;
    if (__gcd(t1, t2) == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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
        ll n, m;
        cin >> n >> m;
        solve(n, m);
    }
}

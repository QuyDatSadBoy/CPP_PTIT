#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

int n, k;
int a[1000];
void BackTrack(int i, int begin)
{
    for (int j = begin; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
        {
            foru(i, 1, k) cout << a[i];
            cout << ' ';
        }
        else
        {
            BackTrack(i + 1, j + 1);
        }
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        BackTrack(1, 1);
        cout << endl;
    }
}
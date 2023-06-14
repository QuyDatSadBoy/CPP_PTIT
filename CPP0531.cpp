#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct Point
{
    int x, y, z;
};
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
        Point n;      // vector phap tuyen
        Point vec[3]; // vector a1a0 a2a0 a3a0
        Point a[4];   // toa do diem
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i].x >> a[i].y >> a[i].z;
        }
        // vector a1a0
        vec[0].x = a[1].x - a[0].x;
        vec[0].y = a[1].y - a[0].y;
        vec[0].z = a[1].z - a[0].z;
        // vector a2a0
        vec[1].x = a[2].x - a[0].x;
        vec[1].y = a[2].y - a[0].y;
        vec[1].z = a[2].z - a[0].z;
        // vector a3a0
        vec[2].x = a[3].x - a[0].x;
        vec[2].y = a[3].y - a[0].y;
        vec[2].z = a[3].z - a[0].z;
        // tim vector phap tuyen n dua vao vector a1a0 a2a0
        n.x = vec[0].y * vec[1].z - vec[1].y * vec[0].z;
        n.y = vec[0].z * vec[1].x - vec[1].z * vec[0].x;
        n.z = vec[0].x * vec[1].y - vec[1].x * vec[0].y;
        // tinh tich vo huong cua vector phap tuyen n voi vector a3a0
        if (vec[2].x * n.x + vec[2].y * n.y + vec[2].z * n.z == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

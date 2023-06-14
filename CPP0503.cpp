#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

struct PhanSo
{
    ll tu, mau;
};
void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p)
{
    ll mc = __gcd(p.tu, p.mau);
    p.tu /= mc;
    p.mau /= mc;
}
void in(PhanSo p)
{
    cout << p.tu << '/' << p.mau << endl;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
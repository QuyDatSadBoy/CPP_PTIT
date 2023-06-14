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
void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo tmp;
    tmp.tu = a.tu * b.mau + a.mau * b.tu;
    tmp.mau = a.mau * b.mau;
    ll mc = __gcd(tmp.tu, tmp.mau);
    tmp.tu /= mc;
    tmp.mau /= mc;
    return tmp;
}
void in(PhanSo a)
{
    cout << a.tu << '/' << a.mau << endl;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}
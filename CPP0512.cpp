#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

typedef struct
{
    ll tu, mau;
} PhanSo;
void rutGon(PhanSo &a)
{
    ll gcd = __gcd(a.tu, a.mau);
    a.tu /= gcd;
    a.mau /= gcd;
}
void process(PhanSo a, PhanSo b)
{
    PhanSo tmp;
    tmp.tu = a.tu * b.tu;
    tmp.mau = a.mau * b.mau;
    ll mc = a.mau * b.mau / __gcd(a.mau, b.mau);
    a.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    a.mau = mc;
    a.tu *= a.tu;
    a.mau *= a.mau;
    rutGon(a);
    cout << a.tu << '/' << a.mau << ' ';
    tmp.tu = tmp.tu * a.tu;
    tmp.mau = tmp.mau * a.mau;
    rutGon(tmp);
    cout << tmp.tu << '/' << tmp.mau << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}

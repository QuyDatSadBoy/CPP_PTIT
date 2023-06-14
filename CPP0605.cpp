#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
class PhanSo
{
private:
    ll tu, mau;

public:
    PhanSo();
    PhanSo(ll tu, ll mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator>>(istream &in, PhanSo &x)
    {
        in >> x.tu >> x.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo x)
    {
        out << x.tu << '/' << x.mau << endl;
        return out;
    }
    void rutgon();
    ~PhanSo();
};
void PhanSo::rutgon()
{
    ll mc = __gcd(tu, mau);
    tu = tu / mc;
    mau = mau / mc;
}
PhanSo::PhanSo()
{
}

PhanSo::~PhanSo()
{
}

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}

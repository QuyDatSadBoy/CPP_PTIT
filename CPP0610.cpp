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
    PhanSo(ll, ll);
    friend istream &operator>>(istream &in, PhanSo &tmp)
    {
        in >> tmp.tu >> tmp.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo tmp)
    {
        cout << tmp.tu << '/' << tmp.mau;
        return out;
    }
    PhanSo operator+(PhanSo khac)
    {
        PhanSo tong;
        tong.tu = this->tu * khac.mau + this->mau * khac.tu;
        tong.mau = this->mau * khac.mau;
        ll mc = __gcd(tong.tu, tong.mau);
        tong.tu /= mc;
        tong.mau /= mc;
        return tong;
    }
    ~PhanSo();
};
PhanSo::PhanSo(ll tu, ll mau)
{
    this->tu = tu;
    this->mau = mau;
}
PhanSo::PhanSo()
{
}
PhanSo::~PhanSo()
{
}

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}

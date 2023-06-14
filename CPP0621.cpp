#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class SinhVien
{
private:
    string maSinhVien, hoTen, lop, email;

public:
    string getMsv()
    {
        return this->maSinhVien;
    }
    friend istream &operator>>(istream &in, SinhVien &x)
    {
        getline(in, x.maSinhVien);
        getline(in, x.hoTen);
        getline(in, x.lop);
        getline(in, x.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        out << x.maSinhVien << ' ' << x.hoTen << ' ' << x.lop << ' ' << x.email;
        return out;
    }
    friend bool operator<(SinhVien x, SinhVien y)
    {
        return x.getMsv() < y.getMsv();
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<SinhVien> v;
    SinhVien tmp;
    while (cin >> tmp)
    {
        v.push_back(tmp);
    }
    sort(all(v));
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

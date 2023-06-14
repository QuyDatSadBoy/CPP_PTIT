#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
class DoanhNghiep
{
private:
    string ma, ten;
    int soLuong;

public:
    DoanhNghiep();
    ~DoanhNghiep();
    friend istream &operator>>(istream &in, DoanhNghiep &x)
    {
        cin.ignore();
        getline(in, x.ma);
        getline(in, x.ten);
        cin >> x.soLuong;
        return in;
    }
    friend ostream &operator<<(ostream &out, DoanhNghiep x)
    {
        out << x.ma << ' ' << x.ten << ' ' << x.soLuong << endl;
        return out;
    }
    int getSoLuong()
    {
        return this->soLuong;
    }
    string getMa()
    {
        return this->ma;
    }
};

DoanhNghiep::DoanhNghiep()
{
}

DoanhNghiep::~DoanhNghiep()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<DoanhNghiep> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v), [](DoanhNghiep a, DoanhNghiep b) -> bool
         {
        if(a.getSoLuong()!=b.getSoLuong())
        {
            return a.getSoLuong()>b.getSoLuong();
        }
        return a.getMa()<b.getMa(); });
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

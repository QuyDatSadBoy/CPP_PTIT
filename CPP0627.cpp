#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

void chuanHoaMon(string &s)
{
    string token;
    string res = "";
    stringstream ss(s);
    while (ss >> token)
    {
        res += toupper(token[0]);
    }
    s = res;
}
string chuanHoaTen(string s)
{
    transform(all(s), s.begin(), ::tolower);
    return s;
}
class GiangVien
{
private:
    string ten, ma, mon;
    static int cnt;

public:
    GiangVien();
    friend istream &operator>>(istream &is, GiangVien &x)
    {
        getline(is, x.ten);
        getline(is, x.mon);
        if (cnt < 10)
            x.ma = "GV0" + to_string(cnt);
        else
            x.ma = "GV" + to_string(cnt);
        chuanHoaMon(x.mon);
        ++cnt;
        return is;
    }
    friend ostream &operator<<(ostream &os, GiangVien x)
    {
        os << x.ma << ' ' << x.ten << ' ' << x.mon << endl;
        return os;
    }
    string getTen()
    {
        return this->ten;
    }
    ~GiangVien();
};

GiangVien::GiangVien()
{
}

GiangVien::~GiangVien()
{
}
int GiangVien::cnt = 1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string key;
        getline(cin, key);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (chuanHoaTen(a[i].getTen()).find(chuanHoaTen(key)) != string::npos)
            {
                cout << a[i];
            }
        }
    }
}

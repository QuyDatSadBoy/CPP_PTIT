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
    string msv, hoTen, lop, email;

public:
    string getLop()
    {
        return this->lop;
    }
    friend istream &operator>>(istream &in, SinhVien &x)
    {
        getline(in, x.msv);
        getline(in, x.hoTen);
        getline(in, x.lop);
        getline(in, x.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        out << x.msv << ' ' << x.hoTen << ' ' << x.lop << ' ' << x.email << endl;
        return out;
    }
};
string chuanHoa(string s)
{
    return s.substr(1, 2);
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
    cin.ignore();
    map<string, vector<SinhVien>> mp;
    for (int i = 0; i < n; i++)
    {
        SinhVien tmp;
        cin >> tmp;
        mp[chuanHoa(tmp.getLop())].push_back(tmp);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string yy = to_string(n % 100);
        cout << "DANH SACH SINH VIEN KHOA " << n << ":" << endl;
        for (SinhVien x : mp[yy])
        {
            cout << x;
        }
    }
}

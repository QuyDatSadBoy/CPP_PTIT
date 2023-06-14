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
    string getLop();
    friend istream &operator>>(istream &, SinhVien &);
    friend ostream &operator<<(ostream &, SinhVien);
};
string SinhVien::getLop()
{
    return this->lop;
}
istream &operator>>(istream &in, SinhVien &x)
{
    getline(in, x.maSinhVien);
    getline(in, x.hoTen);
    getline(in, x.lop);
    getline(in, x.email);
    return in;
}
ostream &operator<<(ostream &out, SinhVien x)
{
    out << x.maSinhVien << ' ' << x.hoTen << ' ' << x.lop << ' ' << x.email << endl;
    return out;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, vector<SinhVien>> mp;
    for (int i = 0; i < n; i++)
    {
        SinhVien tmp;
        cin >> tmp;
        mp[tmp.getLop()].push_back(tmp);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string lop;
        cin >> lop;
        cout << "DANH SACH SINH VIEN LOP " << lop << ":" << endl;
        for (SinhVien x : mp[lop])
        {
            cout << x;
        }
    }
}

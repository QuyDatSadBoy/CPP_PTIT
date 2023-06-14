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
    string getMsv()
    {
        return this->msv;
    }
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
    return s.substr(3, 4);
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
        mp[tmp.getMsv().substr(3, 4)].push_back(tmp);
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string nganh;
        getline(cin, nganh);
        transform(nganh.begin(), nganh.end(), nganh.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
        if (nganh == "KE TOAN")
            nganh = "DCKT";
        else if (nganh == "CONG NGHE THONG TIN")
            nganh = "DCCN";
        else if (nganh == "AN TOAN THONG TIN")
            nganh = "DCAT";
        else if (nganh == "DIEN TU")
            nganh = "DCDT";
        else
            nganh = "DCVT";
        for (SinhVien x : mp[nganh])
        {
            if (nganh == "DCCN" || nganh == "DCAT")
            {
                if (x.getLop()[0] != 'E')
                    cout << x;
            }
            else
                cout << x;
        }
    }
}

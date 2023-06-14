#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void chuanHoa(string &s)
{
    stringstream ss(s);
    string token;
    string res = "";
    while (ss >> token)
    {
        res += toupper(token[0]);
    }
    s = res;
}
class GiangVien
{
private:
    string ten, mon, ma;
    static int cnt;

public:
    friend istream &operator>>(istream &is, GiangVien &x)
    {
        if (cnt < 10)
            x.ma = "GV0" + to_string(cnt);
        else
            x.ma = "GV" + to_string(cnt);
        getline(is, x.ten);
        getline(is, x.mon);
        ++cnt;
        chuanHoa(x.mon);
        return is;
    }
    friend ostream &operator<<(ostream &os, GiangVien x)
    {
        os << x.ma << ' ' << x.ten << ' ' << x.mon << endl;
        return os;
    }
    string getMon()
    {
        return this->mon;
    }
};
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
    map<string, vector<GiangVien>> mp;
    for (int i = 0; i < n; i++)
    {
        GiangVien tmp;
        cin >> tmp;
        mp[tmp.getMon()].push_back(tmp);
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string mon;
        getline(cin, mon);
        chuanHoa(mon);
        cout << "DANH SACH GIANG VIEN BO MON " << mon << ":" << endl;
        for (GiangVien x : mp[mon])
        {
            cout << x;
        }
    }
}

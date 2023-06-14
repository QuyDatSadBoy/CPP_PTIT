#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
class GiangVien
{
private:
    string ten, ma, mon;
    static int cnt;

public:
    string getTen()
    {
        return this->ten;
    }
    string getMa()
    {
        return this->ma;
    }
    void nhap();
    void xuat();
    void chuanHoa();
};
int GiangVien::cnt = 1;
void GiangVien::nhap()
{
    ma = "GV" + string(2 - to_string(cnt).size(), '0') + to_string(cnt);
    getline(cin, ten);
    getline(cin, mon);
    ++cnt;
}
void GiangVien::xuat()
{
    cout << ma << ' ' << ten << ' ' << mon << endl;
}
void GiangVien::chuanHoa()
{
    stringstream ss(mon);
    string token;
    string res = "";
    while (ss >> token)
    {
        token[0] = toupper(token[0]);
        res += token[0];
    }
    mon = res;
}
bool cmp(GiangVien a, GiangVien b)
{
    string ten1 = "";
    string ten2 = "";
    string tmp1 = a.getTen();
    string tmp2 = b.getTen();
    for (int i = tmp1.size(); i >= 0; --i)
    {
        if (tmp1[i] == ' ')
            break;
        ten1 = tmp1[i] + ten1;
    }
    for (int i = tmp2.size(); i >= 0; --i)
    {
        if (tmp2[i] == ' ')
            break;
        ten2 = tmp2[i] + ten2;
    }
    if (ten1 != ten2)
        return ten1 < ten2;
    return a.getMa() < b.getMa();
}
void sapxep(GiangVien a[], int n)
{
    sort(a, a + n, cmp);
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
    GiangVien a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
        a[i].chuanHoa();
    }
    sapxep(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
}

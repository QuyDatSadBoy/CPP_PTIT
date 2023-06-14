#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

int dem = 0;
struct NhanVien
{
    string ten, gt, sn, diachi, masothue, hopdong;
};
void nhap(NhanVien &x)
{
    if (dem == 0)
        cin.ignore();
    getline(cin, x.ten);
    getline(cin, x.gt);
    getline(cin, x.sn);
    getline(cin, x.diachi);
    getline(cin, x.masothue);
    getline(cin, x.hopdong);
    ++dem;
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string id = to_string(i + 1);
        while (id.size() < 5)
        {
            id = "0" + id;
        }
        cout << id << ' ' << ds[i].ten << ' ' << ds[i].gt << ' ' << ds[i].sn << ' ' << ds[i].diachi << ' ' << ds[i].masothue << ' ' << ds[i].hopdong << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
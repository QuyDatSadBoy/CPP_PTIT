#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

struct SinhVien
{
    string name;
    string id;
    string ns;
    double gpa;
};
void nhap(SinhVien &a)
{
    getline(cin, a.name);
    cin >> a.id >> a.ns;
    cin >> a.gpa;
}
void in(SinhVien &a)
{
    if (a.ns[1] == '/')
    {
        a.ns = "0" + a.ns;
    }
    if (a.ns[4] == '/')
    {
        a.ns.insert(3, "0");
    }
    cout << "B20DCCN001" << ' ' << a.name << ' ' << a.id << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << endl;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
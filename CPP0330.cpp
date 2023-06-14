#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

string solve(string s)
{
    int cnt[10] = {0}; // đếm tần suất các số xuất hiện trong s từ 0 đến 9
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - '0']++;
    }
    int cntOdd = 0; // lưu tần suất lẻ max
    int num;        // lưu số có tần suất lẻ max
    for (int i = 0; i < 10; i++)
    {
        if (cnt[i] & 1)
        {
            if (cnt[i] >= cntOdd)
            {
                num = i;
                cntOdd = cnt[i];
            }
        }
    }
    string res = ""; // lưu chuỗi đáp án
    for (int i = 9; i >= 0; --i)
    {
        if (cnt[i] % 2 == 0)
        {
            res += string(cnt[i] >> 1, i + '0');
        }
    }
    if (res == "" || res[0] == '0') // tần suất toàn lẻ hoặc chỉ có tần suất 0 là chẵn
    {
        int maxx = 0;
        int p;
        for (int i = 1; i < 10; i++)
        {
            if (cnt[i] >= maxx)
            {
                maxx = cnt[i];
                p = i;
            }
        }
        res = string(maxx, p + '0');
    }
    else // vừa có lẻ chẵn hoặc toàn chẵn
    {
        string tmp = res;
        reverse(all(tmp));
        if (cntOdd == 0) // toàn chẵn
        {
            res += tmp;
        }
        else
        {
            res = res + string(cntOdd, num + '0') + tmp;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}

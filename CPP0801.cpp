#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

int main()
{
    ifstream in;
    ofstream out;
    in.open("PTIT.in");
    out.open("PTIT.out");
    string s;
    while (getline(in, s))
    {
        out << s << endl;
    }
    in.close();
    out.close();
    return 0;
}
#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = a, i##_len = (b); i < i##_len; ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define _rrep(i, n) rrepi(i, n, 0)
#define rrepi(i, a, b) for (int i = a - 1, i##_len = (b); i >= i##_len; --i)
#define rrep(...) _overload3(__VA_ARGS__, rrepi, _rrep, )(__VA_ARGS__)
#define len(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define vi vector<int>
#define vvi vector<vector<int>>
// clang-format off
template<class T>bool maxs(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool mins(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on
typedef long long ll;
using namespace std;

class ClassName {
  public:
    int funcName(int i) {
        // do something
        return i;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int i;

    cin >> i;

    ClassName c;

    out(c.funcName(i));
}

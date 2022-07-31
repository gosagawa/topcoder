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

class FiringEmployees {
  public:
    int fire(vi m, vi s, vi p) {
        int n = len(m);
        vi r(n + 1);
        rrep(i, n) {
            int t = r[i + 1] + p[i] - s[i];
            if (t > 0) {
                r[m[i]] += t;
            }
        }

        return r[0];
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int i;

    cin >> i;

    FiringEmployees c;

    vi m = {0, 1, 2, 3};
    vi s = {4, 3, 2, 1};
    vi p = {2, 3, 4, 5};

    out(c.fire(m, s, p));
}
/* TLE
 *class FiringEmployees {
  public:
    vvi edges;
    vi s;
    vi p;
    int fire(vi m, vi s, vi p) {
        this->s = s;
        this->p = p;
        int n = len(m);
        this->edges = vvi(n + 1, vi(0));
        rep(i, n) { this->edges[m[i]].pb(i + 1); }

        return dfs(0, -1);
    }
    int dfs(int i, int p) {
        int t = 0;
        rep(j, len(this->edges[i])) {
            if (this->edges[i][j] != p) {
                t += dfs(this->edges[i][j], i);
            }
        }
        if (i != 0) {
            t += this->p[i - 1] - this->s[i - 1];
        }
        if (t > 0) {
            return t;
        }
        return 0;
    }
};
*/

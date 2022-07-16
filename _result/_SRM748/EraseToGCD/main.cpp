#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class EraseToGCD {
   public:
    int countWays(vector<int> s, int g) {
        vector<int> pl(1001);
        for (int i = 2; i < 1001; ++i) {
            if (pl[i] != 0) {
                continue;
            }
            pl[i]++;
            for (int j = i + i; j < 1001; j += i) {
                if (pl[j] == -1) {
                    continue;
                }
                pl[j]++;
            }
            for (int j = i * i; j < 1001; j += i * i) {
                pl[j] = -1;
            }
        }
        int mod = 1000000007;
        vector<int> m2(s.size() + 1);
        int t = 1;

        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] % g != 0) {
                s.erase(begin(s) + i);
                continue;
            }
            s[i] /= g;
        }
        for (int i = 0; i < s.size() + 1; ++i) {
            m2[i] = (t - 1 + mod) % mod;
            t *= 2;
            t %= mod;
        }

        int r = m2[s.size()];
        for (int i = 2; i < 1001; ++i) {
            if (pl[i] == -1) {
                continue;
            }

            int c = 0;
            for (int j = 0; j < s.size(); ++j) {
                if (s[j] % i == 0) {
                    c++;
                }
            }
            if (c > 0) {
                if (pl[i] % 2 == 0) {
                    r = (r + m2[c]) % mod;
                } else {
                    r = (r - m2[c] + mod) % mod;
                }
            }
        }
        return r;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int n, g;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    cin >> g;

    EraseToGCD c;

    out(c.countWays(s, g));
}

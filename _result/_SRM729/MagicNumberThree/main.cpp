#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class MagicNumberThree {
   public:
    int countSubsequences(string s) {
        int n = (int)s.size();
        vector<vector<int>> dp(n + 1, vector<int>(3));

        dp[0][0] = 1;
        int mod = 1000000007;

        for (int i = 0; i < n; ++i) {
            int t;
            t = s[i] - '0';
            for (int j = 0; j < 3; ++j) {
                dp[i + 1][j] += dp[i][j];
                dp[i + 1][j] %= mod;
                dp[i + 1][(j + t) % 3] += dp[i][j];
                dp[i + 1][(j + t) % 3] %= mod;
            }
        }
        return (dp[n][0] + mod - 1) % mod;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    string i;

    cin >> i;

    MagicNumberThree c;

    out(c.countSubsequences(i));
}

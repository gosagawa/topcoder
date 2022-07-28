#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class MatchingPatterns {
   public:
    string solve(int N, vector<int> L, vector<string> patterns) {
        vector<vector<int>> pt2(patterns.size(), vector<int>(0));
        vector<vector<int>> pt3(patterns.size(), vector<int>(0));
        vector<vector<int>> ans(N, vector<int>(60));
        string r;
        for (int i = 0; i < patterns.size(); ++i) {
            for (int j = 0; j < patterns[i].size(); ++j) {
                int t = patterns[i][j] - 'A';
                if (t < 26) {
                    for (int k = 0; k < L[t]; ++k) {
                        pt2[i].push_back(t);
                        pt3[i].push_back(k);
                    }
                } else {
                    pt2[i].push_back(t);
                    pt3[i].push_back(0);
                }
            }
        }
        int sz = pt2[0].size();
        for (int i = 0; i < patterns.size(); ++i) {
            if (pt2[i].size() != sz) {
                return "";
            }
        }
        for (int i = 0; i < sz; ++i) {
            int t = 0;
            for (int j = 0; j < patterns.size(); ++j) {
                if (pt2[j][i] < 26) {
                    if (t == 0) {
                        t = ans[pt2[j][i]][pt3[j][i]];
                    } else if (t != ans[pt2[j][i]][pt3[j][i]]) {
                        return "";
                    }
                } else {
                    if (t == 0) {
                        t = pt2[j][i];
                    } else if (t != pt2[j][i]) {
                        return "";
                    }
                }
            }
            if (t == 0) {
                continue;
            }
            for (int j = 0; j < patterns.size(); ++j) {
                if (pt2[j][i] < 26) {
                    if (ans[pt2[j][i]][pt3[j][i]] == 0) {
                        ans[pt2[j][i]][pt3[j][i]] = t;
                    } else if (ans[pt2[j][i]][pt3[j][i]] != t) {
                        return "";
                    }
                }
            }
        }
        for (int i = 0; i < sz; ++i) {
            int t = 0;
            if (pt2[0][i] < 26) {
                t = ans[pt2[0][i]][pt3[0][i]];
            } else {
                t = pt2[0][i];
            }
            if (t == 0) {
                t = 55;
            }
            r += t + 'A';
        }

        return r;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int i;

    cin >> i;

    MatchingPatterns c;

    out(c.solve(4, {1, 2, 3, 4}, {"ABCD", "DxAyzB"}));
}

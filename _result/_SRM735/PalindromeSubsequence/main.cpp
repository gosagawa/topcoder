#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class PalindromeSubsequence {
   public:
    vector<int> optimalPartition(string s) {
        vector<int> r(s.size(), 1);
        bool isP = true;
        for (int i = 0; i < (int)s.size(); ++i) {
            if (s[i] != s[s.size() - 1 - i]) {
                isP = false;
            }
        }
        if (isP) {
            return r;
        }
        for (int i = 0; i < (int)s.size(); ++i) {
            if (s[i] == 'b') {
                r[i]++;
            }
        }

        return r;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    string s;

    cin >> s;

    PalindromeSubsequence c;

    vector<int> r;
    r = c.optimalPartition(s);
    ;

    for (int i = 0; i < (int)s.size(); ++i) {
        out(r[i]);
    }
}

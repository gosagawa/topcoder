#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class MaximumRange {
   public:
    int findMax(string s) {
        int pc = 0;
        int mc = 0;
        for (int i = 0; i < (int)s.size(); ++i) {
            char ch = s[i];
            if (ch == '+') {
                pc++;
            }
            if (ch == '-') {
                mc++;
            }
        }
        if (pc > mc) {
            return pc;
        }
        return mc;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    string s;

    cin >> s;

    MaximumRange c;

    out(c.findMax(s))
}

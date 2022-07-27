#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class GoThereExactly {
   public:
    string walk(int r1, int c1, int r2, int c2, int s) {
        int need = 0;
        string r;
        if (r1 > r2) {
            need += r1 - r2;
            for (int i = 0; i < r1 - r2; ++i) {
                r += "U";
            }
        } else {
            need += r2 - r1;
            for (int i = 0; i < r2 - r1; ++i) {
                r += "D";
            }
        }
        if (c1 > c2) {
            need += c1 - c2;
            for (int i = 0; i < c1 - c2; ++i) {
                r += "L";
            }
        } else {
            need += c2 - c1;
            for (int i = 0; i < c2 - c1; ++i) {
                r += "R";
            }
        }
        if (need > s) {
            return "IMPOSSIBLE";
        }
        if ((s - need) % 2 == 1) {
            return "IMPOSSIBLE";
        }
        for (int i = 0; i < (s - need) / 2; ++i) {
            r += "UD";
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

    GoThereExactly c;

    out(c.walk(4, 7, 6, 9, 12));
}

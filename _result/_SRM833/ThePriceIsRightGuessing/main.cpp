#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class ThePriceIsRightGuessing {
   public:
    long long guess(vector<long long> previousGuesses, long long MAX) {
        sort(previousGuesses.begin(), previousGuesses.end());
        long long t = 0;
        long long r = 0;
        long long diff = 0;
        for (int i = 0; i < previousGuesses.size(); ++i) {
            if (previousGuesses[i] - t == 1) {
                t = previousGuesses[i];
                continue;
            }
            if (previousGuesses[i] - t > diff) {
                diff = previousGuesses[i] - t;
                r = t;
            }
            t = previousGuesses[i];
        }
        if (MAX + 1 - t > diff) {
            r = t;
        }
        return r + 1;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int i;

    cin >> i;

    ThePriceIsRightGuessing c;

    out(c.guess({1, 9, 5, 2, 4, 10, 7, 3, 8}, 12));
}

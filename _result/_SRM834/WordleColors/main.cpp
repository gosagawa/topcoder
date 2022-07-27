#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class WordleColors {
   public:
    string color(string hidden, string guess) {
        vector<int> isG(5);
        vector<int> isY(5);
        for (int i = 0; i < 5; ++i) {
            char ch1 = hidden[i];
            char ch2 = guess[i];
            if (ch1 == ch2) {
                isG[i] = 1;
            }
        }
        for (int i = 0; i < 5; ++i) {
            if (isG[i] == 1) {
                continue;
            }
            char ch1 = hidden[i];
            for (int j = 0; j < 5; ++j) {
                if (isG[j] == 1 || isY[j] == 1) {
                    continue;
                }
                char ch2 = guess[j];
                if (ch1 == ch2) {
                    isY[j] = 1;
                    break;
                }
            }
        }
        string r;
        for (int i = 0; i < 5; ++i) {
            if (isG[i] == 1) {
                r += "g";
                continue;
            }
            if (isY[i] == 1) {
                r += "y";
                continue;
            }
            r += "-";
        }
        return r;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    string i;
    string j;

    cin >> i;
    cin >> j;

    WordleColors c;

    out(c.color(i, j));
}

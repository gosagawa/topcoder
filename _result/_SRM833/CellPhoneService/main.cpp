#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class CellPhoneService {
   public:
    int payLeast(vector<int> calls, int P, vector<int> perMonth,
                 vector<int> perCall, vector<int> perMinute) {
        int r = 0;
        for (int i = 0; i < P; ++i) {
            int t = perMonth[i];
            for (int j = 0; j < calls.size(); ++j) {
                t += perCall[i];
                t += (calls[j] + 59) / 60 * perMinute[i];
            }

            if (i == 0) {
                r = t;
            } else if (r > t) {
                r = t;
            }
        }
        return r;
    }
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int i;

    CellPhoneService c;

    out(c.payLeast({120, 121, 179}, 1, {500}, {200}, {7}));
}

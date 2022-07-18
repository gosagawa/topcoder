#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class OneHandSort {
   public:
    vector<int> sortShelf(vector<int> is) {
        vector<int> r;
        is.push_back(-1);
        for (int i = 0; i < is.size(); ++i) {
            if (is[i] == i) {
                continue;
            }
            if (is[i] != -1) {
                for (int j = i; j < is.size(); ++j) {
                    if (is[j] == -1) {
                        is[j] = is[i];
                        is[i] = -1;
                        r.push_back(i);
                        break;
                    }
                }
            }
            for (int j = i; j < is.size(); ++j) {
                if (is[j] == i) {
                    is[j] = -1;
                    is[i] = i;
                    r.push_back(j);
                    break;
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

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> r;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    OneHandSort c;

    r = c.sortShelf(v);
    for (int i = 0; i < r.size(); ++i) {
        out(r[i]);
    }
}

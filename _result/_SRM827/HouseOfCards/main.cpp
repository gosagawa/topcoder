#include <bits/stdc++.h>
#define out(X) cout << (X) << endl;
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#else
#define DBG(X)
#endif

using namespace std;

class HouseOfCards {
   public:
    long long count(int a) { return a * (a + 1) + a * (a - 1) / 2; };
};

int main() {
#ifdef __LOCAL
    freopen("input", "r", stdin);
#endif

    int a;

    cin >> a;
    HouseOfCards hoc;
    out(hoc.count(a))
}

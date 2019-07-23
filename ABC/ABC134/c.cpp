#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORE(i, a, b) for (int i = (a); i <= (b); ++i)
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repe(i, n) for (int i = 0; i <= (n); ++i)
#define all(v) (v).begin(), (v).end()
#define sp cout << fixed << setprecision(10)
typedef pair<int, int> P;
const int inf = (int)1e9;
const int mod = (int)1e9 + 7;
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    int max1 = 0, max2 = 0;
    rep(i, n) {
        if (a[i] >= max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }
    }

    rep(i, n) {
        if (a[i] == max1) {
            cout << max2 << endl;
        } else {
            cout << max1 << endl;
        }
    }

    return 0;
}
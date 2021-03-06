#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define FORE(i, a, b) for(int i=(a);i<=(b);++i)
#define rep(i, n) for(int i=0;i<(n);++i)
#define repe(i, n) for(int i=0;i<=(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define SP cout<<fixed<<setprecision(10)
typedef pair<int, int> P;
const int INF = (int) 1e9;
const int MOD = (int) 1e9 + 7;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, a, b;
	cin >> n >> a >> b;
	int p[n];
	rep(i, n) cin >> p[i];
	
	int cnt[3];
	rep(i, 3) cnt[i] = 0;
	rep(i, n) {
		if (p[i] <= a) cnt[0]++;
		else if (p[i] <= b) cnt[1]++;
		else cnt[2]++;
	}
	
	sort(cnt, cnt + 3);
	
	cout << cnt[0] << endl;
	
	return 0;
}
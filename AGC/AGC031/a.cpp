#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define FORE(i, a, b) for(int i=(a);i<=(b);++i)
#define FORR(i, a, b) for(int i=(b-1);i>=(a);--i)
#define FORRE(i, a, b) for(int i=(b);i>=(a);--i)
#define rep(i, n) for(int i=0;i<(n);++i)
#define repe(i, n) for(int i=0;i<=(n);++i)
#define repr(i, n) for(int i=(n-1);i>=0;--i)
#define repre(i, n) for(int i=(n);i>=0;--i)
#define ALL(v) (v).begin(),(v).end()
#define SP cout<<fixed<<setprecision(10)
typedef pair<int, int> P;
const int INF = (int) 1e9;
const ll MOD = (ll) 1e9 + 7;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll n;
	string s;
	cin >> n >> s;
	
	ll cnt[26] = {};
	rep(i, n) {
		cnt[s[i] - 'a']++;
	}
	
	ll sum = 0;
	rep(i, n) {
		ll add = 1;
		rep(j, 26) {
			if (s[i] - 'a' != j) {
				add *= cnt[j] + 1;
				add %= MOD;
			}
		}
//		cout << add << endl;
		sum += add;
		cnt[s[i] - 'a']--;
	}
	sum %= MOD;
	cout << sum << endl;
	
	return 0;
}
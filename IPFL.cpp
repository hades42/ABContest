#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	string s; cin >> s;
	ll q; cin >> q;
	ll flip = 0;
	while (q--) {
		ll t, a, b; cin >> t >> a >> b;
		if (t == 1) {
			a--;
			b--;
			if (flip == 1) {
				if (a < n) a += n;
				else a -= n;
				if (b < n) b += n;
				else b -= n;
			}
			swap(s[a], s[b]);
		} else {
			flip ^= 1;
		}
	}
	if(flip){
		for(ll i = 0; i < n; i++) swap(s[i], s[i+n]);
	}
	cout << s << endl;
}
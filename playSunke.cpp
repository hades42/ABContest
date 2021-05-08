#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	ll ans = INF;
	bool find = false;
	while(n--){
		ll a, p, x; cin >> a >> p >> x;
		if(x - a > 0){
			ans = min(ans, p);
			find = true;
		}
	}
	if(!find){
		cout << -1 << endl;
	} else{
		cout << ans << endl;
	}
	return 0;
}
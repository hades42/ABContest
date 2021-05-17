#include <bits/stdc++.h>
#define ll long long
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
using namespace std;

ll powmod(ll x, ll y){
	ll res =1;
	for(ll i = 0; i < y; i++){
		res = res*x%MOD;
	}
	return res;
}
int main() {
	ll n; cin >> n;
	ll ans = powmod(10, n) - (powmod(9,n) + powmod(9,n) - powmod(8, n));
	ans %= MOD;
	ans = (ans + MOD) % MOD;
	cout << ans << endl;
}
#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	set<ll> ans;
	for(ll i = 1; i*i <= n; i++){
		if(n % i == 0){
			ans.insert(i);
			ans.insert(n/i);
		}
	}	
	for(auto x : ans) cout << x << endl;
	return 0;
}
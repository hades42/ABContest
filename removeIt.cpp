#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n,x;
	cin >> n >> x;
	vector<ll> ans;
	for(ll i = 0; i < n; i++){
		ll num; cin >> num;
		if(num != x){
			ans.push_back(num);
		}
	}
	for(auto n : ans) cout << n << " ";
	return 0;
}
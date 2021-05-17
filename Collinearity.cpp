#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<pair<ll,ll>> arr(n);
	for(ll i = 0; i < n; i++){
		ll x,y; cin >> x >> y;
		pair<ll,ll> p = make_pair(x,y);
		arr[i] = p;
	}
	for(ll i = 0; i < n; i++){
		for(ll j = i + 1; j < n; j++){
			for(ll z = j + 1; z < n; z++){
				// Slope i and j
				ll a = (arr[j].second - arr[i].second)*(arr[z].first - arr[i].first);
				// Slope i and z
				ll b = (arr[z].second - arr[i].second)*(arr[j].first - arr[i].first);
				if(a == b){
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
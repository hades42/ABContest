#include <bits/stdc++.h>
#define ll long long
const ll INF = 1e18;
using namespace std;

int main() {
	vector<ll> arr(4);
	for(ll i = 0; i < 4; i++){
		cin >> arr[i];
	}	
	ll mx = -INF;
	for(ll i = 0; i <=1; i++){
		for(ll j = 2; j <= 3; j++){
			mx = max(mx, arr[i] * arr[j]);
		}
	}	
	cout << mx << endl;
}
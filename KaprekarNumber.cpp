#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n, k; cin >> n >> k;
	while(k--){
		vector<ll> arr;
		while(n > 0){
			arr.push_back(n%10);
			n = n/10;
		}
		sort(arr.begin(), arr.end());

		ll g1 = 0;
		for(ll n : arr){
			g1 = 10* g1 + n;
		}
		ll g2 = 0;
		for(ll i = arr.size() -1; i >= 0; i--){
			g2 = 10*g2 + arr[i]; 
		}
		n = g2 - g1;
	}
	cout << n << endl;
}
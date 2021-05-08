#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<ll> arr1(n);
	vector<ll> arr2(n);
	for(ll i = 0 ; i < n; i++){
		cin >> arr1[i];
	}
	for(ll i = 0; i < n; i++){
		cin >> arr2[i];
	}
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	ll x = arr1[n-1];
	ll y = arr2[0];
	if(y - x < 0){
		cout << 0 << endl;
	} else{
		cout << y - x + 1 << endl;
	}
	return 0;
}
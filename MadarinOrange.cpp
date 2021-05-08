#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<int> arr(n);
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int mn = INT_MAX;
		for(int j = i; j < n; j++){
			mn = min(arr[j], mn);
			ans = max(ans, mn*(j-i+1));
		}
	}
	cout << ans << endl;
}
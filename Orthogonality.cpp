#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	ll arr[2][n];
	for (int i = 0; i < n; i++) {
		cin >> arr[0][i];
	}
	for (int i = 0; i < n; i++) {
		cin >> arr[1][i];
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[0][i] * arr[1][i];
	}
	if(sum == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
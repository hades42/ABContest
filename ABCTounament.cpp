#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	int n; cin >> n;
	int node = pow(2, n + 1) - 1;
	vector<pair<ll, int>> arr(node);
	int index = 1;
	for (int i = pow(2, n) - 1; i < node; i++) {
		ll num; cin >> num;
		pair<ll, int> p = make_pair(num, index);
		arr[i] = p;
		index++;
	}
	int ans = 0;
	for (int i = pow(2, n) - 2; i >= 0; i--) {
		if (arr[2 * i + 1].first > arr[2 * i + 2].first) {
			arr[i] = arr[2 * i + 1];
			if (i == 0) {
				ans = arr[2 * i + 2].second;
			}
		} else {
			arr[i] = arr[2 * i + 2];
			if (i == 0) ans = arr[2 * i + 1].second;
		}
	}
	cout << ans << endl;
}
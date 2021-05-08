#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n, x; cin >> n >> x;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		double v, p; cin >> v >> p;
		sum += v * p;
		if (sum > x * 100) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}

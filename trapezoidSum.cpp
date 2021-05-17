#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll sum = 0;
	while(n--){
		ll a, b; cin >> a >> b;
		a--;
		sum += b*(b+1)/2 - a*(a+1)/2;
	}
	cout << sum << endl;
	return 0;
}
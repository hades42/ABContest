#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	ll res = 0;
	while(n--){
		ll a, b;
		cin >> a >> b;
		if(a == b) res++;
		else res = 0;
		if(res >= 3){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
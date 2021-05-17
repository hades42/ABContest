#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

vector<ll> prefact(12);
int main() {
	ll n; cin >> n;
	ll res = 1;
	for(int i =1; i <= 11; i++){
		res *= (n - i);
		res /= i;
	}
	cout << res << endl;
}
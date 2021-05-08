#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n;
	cin >> n;
	unordered_set<ll> s;
	for(ll a = 2; a*a <= n; a++){
		ll x = a*a;
		while(x <= n){
			s.insert(x);
			x *= a;
		}
	}	
	cout << n - s.size() << endl;
}
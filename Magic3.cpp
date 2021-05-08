#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n, s ,d; cin >> n >> s >> d;
	bool find = false;
	while(n--){
		ll x, y; cin >> x >> y;
		if(x < s && y > d){
			find = true;
		}
	}
	if(find) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;		
}
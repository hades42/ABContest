#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll r1, c1, r2,c2; cin >> r1 >> c1 >> r2 >> c2;
	ll ans = 3;

	if(r1 == r2 && c1 == c2){
		ans = 0;
	} else if(r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 || abs(r1-r2) + abs(c1 - c2) <= 3){
		ans = 1;
	} else if((r1 + c1 + r2 - c2) % 2 == 0){
		ans = 2;
	} else{
		for(ll i = -3; i <= 3; i++){
			for(ll j = -3; j <= 3; j++){
				if(abs(i) + abs(j) > 3){
					continue;
				}
				ll p = r1+i;
				ll q = c1+j;
				if(p + q == r2 + c2 || p - q == r2 - c2 || abs(p - r2) + abs(q - c2) <= 3){
					ans = 2;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<ll> arr(3);	
	ll k= 0;
	while(n > 0){
		ll digit = n % 10;
		arr[digit % 3]++;
		k++;
		n /= 10;
	}
	ll remain = (arr[1] + 2*arr[2]) % 3;
	if(!remain){
		cout << 0 << endl;
		return 0;
	}
	ll res;
	if(remain == 1){
		if(arr[1]){
			if(k < 2) res = -1;
			else res = 1;
		} else{
			if(k < 3) res = -1;
			else res = 2;
		}
	} else{
		if(arr[2]){
			if(k < 2) res = -1;
			else res = 1;
		} else{
			if(k < 3) res = -1;
			else res = 2;
		}
	}
	cout << res << endl;
}
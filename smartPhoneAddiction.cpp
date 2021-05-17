#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll N, M, T; cin >> N >> M >> T;
	ll cap = N;
	ll time = 0;
	for(int i = 0; i < M; i++){
		ll a, b; cin >> a >> b;
		N -= (a - time);
		if(N < 1){
			cout << "No" << endl;
			return 0;
		}
		N += (b-a);
		if(N >= cap) N = cap;
		time = b;
	}	
	N -= (T - time);
	if(N < 1){
		cout << "No" << endl;
		return 0;
	}
	cout << "Yes" << endl;
	return 0;
}
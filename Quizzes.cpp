#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n, x; cin >> n >> x;
	string input; cin >> input;
	for(ll i = 0; i < input.size(); i++){
		if(input[i] == 'o') x++;
		else{
			if(x > 0) x--;
		}
	}
	cout << x << endl;
}
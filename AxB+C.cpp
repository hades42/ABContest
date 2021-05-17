#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n;
	cin >> n; 
	ll count = 0;
	for(ll i =1; i <= n-1; i++){
		count += (n-1)/i;
	}
	cout << count << endl;
}
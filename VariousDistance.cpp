#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	ll a = 0,c = 0;
	double b = 0;
	while(n--){
		ll num; cin >> num;
		a += abs(num);
		c = max(c, abs(num));
		b += (double)(abs(num) * abs(num));
	}
	cout << a << endl;
	printf("%.15f\n", sqrt(b));
	cout << c << endl;
}
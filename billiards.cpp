#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	double sx, sy, gx,gy; cin >> sx >> sy >> gx >> gy;
	double ans = (sy*gx + gy*sx)/(gy+sy);
	printf("%.10f\n", ans);
}
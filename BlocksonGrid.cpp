#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll h,w;
	cin >> h >> w;
	vector<int> arr(h*w);
	int mn = INT_MAX;
	for(int i = 0; i < h*w; i++){
		cin >> arr[i];
		mn = min(mn, arr[i]);
	}
	int sum = 0;
	for(int i = 0; i < h*w; i++) sum += (arr[i] - mn);
	cout << sum << endl;
}
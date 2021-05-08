#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll h, w;
	cin >> h >> w;
	vector<vector<bool>> grid(h, vector<bool>(w));
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			char c; cin >> c;
			if(c == '#') grid[i][j] = true;
		}
	}
	int ans = 0;
	for(int i = 0; i < h -1; i++){
		for(int j = 0; j < w-1; j++){
			int sum = 0;
			sum ^= grid[i][j];
			sum ^= grid[i + 1][j];
			sum ^= grid[i][j + 1];
			sum ^= grid[i + 1][j+1];
			ans+= sum;
		}
	}
	cout << ans << endl;
}
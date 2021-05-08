#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<array<int, 2>> conditions(m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> conditions[i][j];
			conditions[i][j]--;
		}
	}

	int k; cin >> k;
	vector<array<int, 2>> people(k);
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> people[i][j];
			people[i][j]--;
		}
	}
	int ans = 0;
	for(int masks = 0; masks < (1 << k); masks++){
		vector<bool> dishes(n);
		for(int i = 0; i < k; i++){
			dishes[people[i][(masks >> i) & 1]] = true;
		}

		int score = 0;
		for(auto c : conditions){
			if(dishes[c[0]] && dishes[c[1]]){
				score++;
			}
		}
		ans = max(ans, score);
	}
	cout << ans << endl;
}
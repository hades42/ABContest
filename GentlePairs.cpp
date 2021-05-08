#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	for(int i = 0; i <n; i++){
		int x, y; cin >> x >> y;
		pair<int,int> p = make_pair(x,y);
		arr[i] = p;
	}
	int count = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			double slope = (double)(arr[j].second - arr[i].second)/(arr[j].first - arr[i].first);
			if(slope >= -1 && slope <= 1){
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
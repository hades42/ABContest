#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	int n; cin >> n;
	int node = 1 << n;
	vector<pair<ll, int>> arr(node);
	for(int i = 0; i < node; i++){
		ll num; cin >> num;
		pair<ll,int> p= make_pair(num,i);
		arr[i] = p;
	}
	pair<ll,int> mx1 = arr[0];
	int mx = mx1.first;
	for(int i = 0; i < node/2; i++){
		if(arr[i].first > mx){
			mx1 = arr[i];
			mx = arr[i].first;
		}	
	}
	pair<ll,int> mx2 = arr[1<<(n-1)];
	int mx2a = mx2.first;
	for(int i = 1 << (n-1); i < node; i++){
		if(arr[i].first > mx2a){
			mx2 = arr[i];
			mx2a = arr[i].first;
		}	
	}
	if(mx > mx2a) cout << mx2.second+1 << endl;
	else cout << mx1.second+1 << endl;
	return 0;
}
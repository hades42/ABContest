#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n);
	int maxNum = 0;
	for(int i =0; i<n; i++){
		cin >> arr[i];
		maxNum = max(arr[i], maxNum);
	}
	int gcdness = 0;
	int gcd = 0;
	for(int i = 2; i <= maxNum; i++){
		int t = 0;
		for(int j = 0; j < n; j++){
			if(arr[j] % i == 0) t++;
		}
		if(t > gcdness){
			gcdness = t;
			gcd = i;
		}
	}
	cout << gcd << endl;
}
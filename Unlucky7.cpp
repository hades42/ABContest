#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

vector<int> base = {8,10};
int main() {
	int n;
	cin >> n;
	int count = 0;
	for(int i = 1; i <= n; i++){
		bool good = 1;
		for(auto b : base){
			for(int num = i; num > 0; num /= b){
				good &= num%b != 7;
			}
		}
		count += good;
	}	
	cout << count << endl;
}
#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	string in; cin >> in;
	ll track = in.size()-1;
	while(in[track] == '0'){
		track--;
	}
	if(track != in.size()-1){
		in.erase(track+1);
	}
	bool find = true;
	for(ll i = 0; i < (in.size() +1)/2; i++ ){
		if(in[i] != in[in.size() - i -1]){
			find = false;
			break;
		}
	}
	if(find) cout << "Yes" << endl;
	else cout << "No" << endl;
}

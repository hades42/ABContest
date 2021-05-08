#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	string input; 
	cin >> input;
	bool is_unreadable = true;
	for(int i = 0; i < input.length(); i++){
		if(i%2 == 0){
			if(!islower(input[i])) is_unreadable = false;
		} else{
			if(!isupper(input[i])) is_unreadable = false;
		}
	}
	if(is_unreadable) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
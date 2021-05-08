#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	int n; cin >> n;
	unordered_set<string> s;
	vector<string> arr;
	for(int i = 0; i < n; i++){
		string input; cin >> input;
		if(input[0] == '!'){
			input.erase(input.begin());
			s.insert(input);
		} else{
			arr.push_back(input);
		}
	}
	for(int i = 0; i < arr.size(); i++){
		if(s.find(arr[i]) != s.end()){
			cout << arr[i] << endl;
			return 0;
		}
	}
	cout << "satisfiable" << endl;
	return 0;
}
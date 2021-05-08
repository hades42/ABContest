#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	double r; 
	double x, y;
	cin >> r >> x >> y;
	double dis = sqrt(x*x + y*y);
	if(dis == r){
		cout << 1 << endl;
	} else if (dis <= r+ r){
		cout << 2 << endl;
	} else{
		cout << ceil(dis/r) << endl;
	}
	return 0;
}
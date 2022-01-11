// https://cses.fi/problemset/task/1641
#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; ++i) {
    	int temp;
    	cin >> temp;
    	a.push_back({temp, i + 1});
    }
    sort(a.begin(), a.end());
    for (int k = 0; k < n; ++k) {
    	int i = 0, j = n - 1;
    	while (i < j) {
    		if (a[i].f + a[j].f + a[k].f == x && i != k && j != k && i != j) {
	    		int b[3];
	    		b[0] = a[i].s; b[1] = a[j].s; b[2] = a[k].s;
	    		sort(b, b + 3);
	    		cout << b[0] << " " << b[1] << " " << b[2];
	    		return 0;
    		}
    		if (a[i].f + a[j].f + a[k].f < x) ++i;
    		else --j;
    	}
    }
    cout << "IMPOSSIBLE";
}

//https://cses.fi/problemset/task/1621/
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(nullptr); cout.tie(nullptr);
  	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	int count = 1;
	sort(a.begin(), a.end());
	for (int i = 1; i < n; ++i) 
		if (a[i - 1] != a[i]) ++count;
	cout << count;	
}

// https://cses.fi/problemset/task/1074
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(),  a.end());
    int p = a[n / 2];
    long long remain = 0;
    for (int i = 0; i < n; ++i) remain += abs(p - a[i]);
    cout << remain;
}

// https://cses.fi/problemset/task/1620
#include<bits/stdc++.h>
using namespace std;
int main() {
  	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    long long t;
    cin >> n >> t;
    long long a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    long long low = 0, high = 1e18;
    long long ans = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += mid / a[i];
            if (sum >= t) break;
        }
        if (sum >= t) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }
    cout << ans;
}

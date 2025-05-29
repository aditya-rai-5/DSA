#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    int64_t dash = count(s.begin(), s.end(), '-');
    int64_t under = n - dash;
    int64_t ans = (dash / 2) * (dash - dash / 2) * under;
    cout <<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/contest/2114/problem/B

#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    int count0 = 0;
    for (char c : s) {
        if (c == '0') {
            count0++;
        }
    }
    int count1 = n - count0;

    int num_total_pairs = n / 2;
    
    int num_bad_pairs_needed = num_total_pairs - k;

    if (count0 < num_bad_pairs_needed || count1 < num_bad_pairs_needed) {
        std::cout << "NO\n";
        return;
    }

    int remaining_zeros_for_good = count0 - num_bad_pairs_needed;
    int remaining_ones_for_good = count1 - num_bad_pairs_needed;

    int possible_good_pairs_from_zeros = remaining_zeros_for_good / 2;
    int possible_good_pairs_from_ones = remaining_ones_for_good / 2;

    int total_max_good_pairs_can_form = possible_good_pairs_from_zeros + possible_good_pairs_from_ones;

    if (total_max_good_pairs_can_form >= k) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
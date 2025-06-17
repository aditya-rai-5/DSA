#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int max_val = 0;

        // Input and track max value
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                max_val = max(max_val, a[i][j]);
            }

        unordered_map<int, int> row_count, col_count;
        int total_max = 0;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (a[i][j] == max_val) {
                    row_count[i]++;
                    col_count[j]++;
                    total_max++;
                }

        // Only try rows/cols where max appears
        bool can_reduce = false;
        for (auto& [r, rc] : row_count) {
            for (auto& [c, cc] : col_count) {
                int overlap = (a[r][c] == max_val) ? 1 : 0;
                if (rc + cc - overlap >= total_max) {
                    can_reduce = true;
                    goto done;
                }
            }
        }

    done:
        cout << (can_reduce ? max_val - 1 : max_val) << '\n';
    }
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num_operations(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int left_op = n;   // initialize with max, to be updated
    int right_op = n;  // same here

    // Find from start
    for (int i = 0; i < n; ++i) {
        if ((arr[i] + arr[n - 1]) % 2 == 0) {
            left_op = i;
            break;
        }
    }

    // Find from end
    for (int i = n - 1; i >= 0; --i) {
        if ((arr[i] + arr[0]) % 2 == 0) {
            right_op = n - 1 - i;
            break;
        }
    }

    return min(left_op, right_op);
}

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int m;
        cin >> m;  // number of elements

        vector<int> arr(m);
        for (int i = 0; i < m; ++i) {
            cin >> arr[i];
        }

        cout << num_operations(arr) << endl;
    }

    return 0;
}

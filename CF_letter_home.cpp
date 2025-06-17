#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b;
        cin >> n >> b;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }

        int min1 = *min_element(arr.begin(), arr.end());
        int max1 = *max_element(arr.begin(), arr.end());

        if(b >= max1){
            cout << b - min1 << endl;
        } else if(b <= min1){
            cout << max1 - b << endl;
        } else {
            int option1 = b - min1 + max1 - min1;
            int option2 = max1 - b + max1 - min1; 
            cout << min(option1, option2) << endl;
        }
    }
    return 0;
}

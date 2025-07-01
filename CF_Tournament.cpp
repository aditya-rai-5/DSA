#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int m=arr[0];
        for(int i=1;i<n;i++){
            m=max(m,arr[i]);
        }
        if(k>1){
            cout<<"Yes";
        }else if(m==arr[j-1]){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}
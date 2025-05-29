// https://codeforces.com/contest/2092/problem/A

#include<iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int m;
        cin>>m;

        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }

        int max_val = arr[0];
        int min_val = arr[0];
    
        for (int i = 1; i < m; i++) {
            if (arr[i] > max_val)
                max_val = arr[i];
            if (arr[i] < min_val)
                min_val = arr[i];
        }

        cout<<max_val-min_val<<endl;
    }
    return 0;
}
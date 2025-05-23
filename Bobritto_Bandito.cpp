#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int l_n;
        int r_n;

        l_n=l;
        r_n=l+m;
        if(l_n<=0 && r_n>=0 && l_n>=(-1)*m && r_n<=m){
            cout<<l_n<<" "<<r_n<<endl;
        }
        else if(l_n>=0 or r_n<=0 or l_n<=(-1)*m or r_n>=m){
            cout<<r-m<<" "<<r<<endl;
        }
        else if((l_n>=0 or r_n<=0) && l_n>=(-1)*m && r_n<=m){
            cout<<(n-m)/2+l<<" "<<(n+m)/2+l<<endl;
        }
        else{
            cout<<(n-m)/2+r<<" "<<(n+m)/2+r<<endl;
        }

    }
    return 0;
}
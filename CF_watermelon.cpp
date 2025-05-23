#include <iostream>
using namespace std;

void hii(int n) {
    if (n % 2 == 0&& n!=2) {
        cout << "Yes" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    hii(n);
    return 0;
}

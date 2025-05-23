#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> getAllPermutations(string s) {
    vector<string> result;
    sort(s.begin(), s.end());
    do {
        result.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    return result;
}

int main() { 
    string s = "abc";
    vector<string> perms = getAllPermutations(s);
    
    for (string p : perms) {
        cout << p << endl;
    }
}

#include<iostream>
#include<vector>
using namespace std;

int firstRepeatingElement(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return i;
            }
        }
    }
    return -1;
}
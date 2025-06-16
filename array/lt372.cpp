// https://leetcode.com/problems/super-pow/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int superPow(int a, vector<int>& b) {
        string s="";
        for(int i=0;i<b.size();i++){
            s.append(to_string(b[i]));
        }
        __int128_t ans=1;
        long int n=stoi(s);
        while(n>0){
            if(n%2==1){
                ans*=a;
            }
            n/=2;
            a*=a;
        }
        return ans;
    }
};
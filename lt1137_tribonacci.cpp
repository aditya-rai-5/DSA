// https://leetcode.com/problems/n-th-tribonacci-number/

#include<iostream>

class Solution {
public:
    int tribonacci(int n) {
        if(n==0 ){
            return n;
        }
        if(n==2||n==1){
            return 1;
        }
        int f_0=0;
        int f_1=1;
        int f_2=1;
        int f_3;

        for(int i=3;i<=n;++i){
            f_3=f_0+f_1+f_2;
            f_0=f_1;
            f_1=f_2;
            f_2=f_3;
        }
        return f_3;
    }
};
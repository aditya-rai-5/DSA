// https://leetcode.com/problems/add-digits/description/

/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.


Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:

Input: num = 0
Output: 0
*/

#include<iostream>
using namespace std;

int addDigits(int num){
    if(num/10==0){
        return num;
    }
    int a=0;
    while(num!=0){
        a+=num%10;
        num=num/10;
    }
    if(a/10!=0){
        return addDigits(a);
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    cout<<addDigits(n)<<endl;

    return 0;
}
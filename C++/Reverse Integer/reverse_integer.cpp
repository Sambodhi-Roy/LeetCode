/*
7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the 
value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long r=0;
        int a=abs(x);
        while(a>0)
        {
            r=r*10+a%10;
            a=a/10;
        }
        return (r>INT_MAX || r<INT_MIN)?0:((x<0)?r*(-1):r);
    }
};

int main()
{
    Solution obj;
    cout<<obj.reverse(120);

    return 0;
}
/*
9. Palindrome Number

Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) {
        int num=x;
        unsigned int r=0;
        while(x>0)
        {
            r=r*10+x%10;
            x=x/10;
        }
        if(r==num)
        return true;
        else
        return false;
    }
};

int main()
{
    Solution obj;
    cout<<obj.isPalindrome(-121);
    
    return 0;
}


/*
125. Valid Palindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and
removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric 
characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise. 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s)
    {
        int len=s.length();
        if(len>=1 && len<=200000)
        {
            string s1="";
            string f="";
            for(int i=0;i<len;i++)
            {
                if((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z') || (s[i]>='0'&&s[i]<='9'))
                {
                    if(s[i]>='A'&&s[i]<='Z')
                    s1+=tolower(s[i]);
                    else
                    s1+=s[i];
                }
            }
            len=s1.length();
            for(int i=len-1;i>=0;i--)
            {
                f+=s1[i];
            }
            if(s1==f)
            return true;
            else
            return false;
        }
        else
        return false;
    }
};

int main()
{
    Solution obj;
    bool result=obj.isPalindrome("A man, a plan, a canal: Panama");
    cout<<result;
    return 0;
}
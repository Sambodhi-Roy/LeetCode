/*
2441. Largest Positive Integer that Exists with its Negative

Given an integer array nums that does not contain any zeros, find the largest positive integer k 
such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.

Example 1:

Input: nums = [-1,2,-3,3]
Output: 3
Explanation: 3 is the only valid k we can find in the array.
Example 2:

Input: nums = [-1,10,6,7,-7,1]
Output: 7
Explanation: Both 1 and 7 have their corresponding negative values in the array. 7 has a larger value.
Example 3:

Input: nums = [-10,8,6,7,-2,-3]
Output: -1
Explanation: There is no a single valid k, we return -1.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> r;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            int k=*(it);
            for(auto it2=nums.begin();it2!=nums.end();it2++)
            {
                if(*it2==(-1)*k)
                {
                    r.emplace_back(k);
                }
            }
        }
        if(r.size()==0)
        {
            return -1;
        }
        int max=r[0];
        for(auto it=r.begin();it!=r.end();it++)
        {
            if(*it>max)
            {
                max=*it;
            }
        }
        return max;
    }
};

int main()
{
    Solution obj;
    vector<int> v1={-1,10,6,7,-7,1};
    cout<<obj.findMaxK(v1);
    
    return 0;
}
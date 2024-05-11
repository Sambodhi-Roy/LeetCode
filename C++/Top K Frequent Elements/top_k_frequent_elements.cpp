/*
347. Top K Frequent Elements

Given an integer array nums and an integer k, return the k most frequent elements. You may return 
the answer in any order.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> heap;
        vector<int> res;
        for(auto it:nums)
        {
            mpp[it]++;
        }

        for(auto it:mpp)
        {
            heap.push({it.second,it.first});
            if(heap.size()>k)
            {
                heap.pop();
            }
        }

        while(k--)
        {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};

int main()
{
    Solution obj;
    vector<int> v1={1,1,1,2,2,3};
    vector<int> res=obj.topKFrequent(v1,2);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}


/*
786. K-th  Smallest Prime Fraction

You are given a sorted integer array arr containing 1 and prime numbers, where all the integers of arr are unique. You are also given an integer k.

For every i and j where 0 <= i < j < arr.length, we consider the fraction arr[i] / arr[j].

Return the kth smallest fraction considered. Return your answer as an array of integers of size 2, where answer[0] == arr[i] and answer[1] == arr[j].

Example 1:

Input: arr = [1,2,3,5], k = 3
Output: [2,5]
Explanation: The fractions to be considered in sorted order are:
1/5, 1/3, 2/5, 1/2, 3/5, and 2/3.
The third fraction is 2/5.
Example 2:

Input: arr = [1,7], k = 1
Output: [1,7]

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        const int n=arr.size();
        double low=0.0;
        double high=1.0;

        while(low<high)
        {
            double m=(low+high)/2.0;
            int countNoGreaterThanM=0;
            int p=0;
            int q=1;
            int j=0;
            for(int i=0;i<n;i++)
            {
                while(j<n && arr[i]>m*arr[j])
                {
                    j++;
                }
                if(j==n)
                {
                    break;
                }
                countNoGreaterThanM+=n-j;
                if(arr[j]*p < arr[i]*q)
                {
                    p=arr[i];
                    q=arr[j];
                }
            }
            if(countNoGreaterThanM==k)
            {
                return {p,q};
            }
            else if(countNoGreaterThanM<k)
            {
                low=m;
            }
            else
            {
                high=m;
            }
        }
        return {};
    }
};

int main()
{
    Solution obj;

    vector<int> v1={1,2,3,5};
    vector<int> res=obj.kthSmallestPrimeFraction(v1,3);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    
    return 0;
}
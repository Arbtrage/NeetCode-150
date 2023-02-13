// https://leetcode.com/problems/combination-sum/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    // solve function that does the actual work of finding combinations
    void solve(int i, int target, vector<int> arr, vector<int> &ds)
    {
        // base case, if we have reached the end of the candidates array
        if (i == arr.size())
        {
            // if the target sum is 0, it means we have found a combination
            if (target == 0)
            {
                // add the combination to the answer vector
                ans.push_back(ds);
            }
            // return as there is no more candidates left to explore
            return;
        }

        // if the current candidate is less than or equal to the target sum
        if (arr[i] <= target)
        {
            // add the candidate to the combination
            ds.push_back(arr[i]);
            // recursively call solve for the remaining target and candidates
            solve(i, target - arr[i], arr, ds);
            // remove the candidate from the combination as we need to try other combinations too
            ds.pop_back();
        }

        // recursively call solve function for the next candidate
        solve(i + 1, target, arr, ds);
    }

    // combinationSum function that takes an array of candidates and target sum as input and returns all possible combinations of numbers from the given candidates array that add up to the target sum
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        // temporary vector to store the current combination
        vector<int> ds;
        // call the solve function to find all possible combinations
        solve(0, target, candidates, ds);
        // return the final answer
        return ans;
    }
};
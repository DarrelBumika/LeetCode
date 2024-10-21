// LeetCode 75 - 724. Find Pivot Index
// https://leetcode.com/problems/find-pivot-index?envType=study-plan-v2&envId=leetcode-75

#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0) {
                leftSum += nums[i - 1];
            }
            rightSum -= nums[i];
            if (leftSum == rightSum) return i;
        }
        return -1;
    }
};
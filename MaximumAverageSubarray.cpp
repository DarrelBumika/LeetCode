// LeetCode 75 - 643. Maximum Average Subarray I
// https://leetcode.com/problems/maximum-average-subarray-i?envType=study-plan-v2&envId=leetcode-75

#include <cassert>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.begin() + k, 0);
        int max_sum = sum;
        int i = 0, j = k;
        while (j != nums.size()) {
            sum = sum - nums[i] + nums[j];
            max_sum = max(max_sum, sum);
            i++;
            j++;
        }
        return (double) max_sum / k;
    }
};

int main() {
    Solution sol;

    vector<int> vec1 = {1, 12, -5, -6, 50, 3};
    assert(sol.findMaxAverage(vec1, 4) == 12.75000);

    vector<int> vec2 = {5};
    assert(sol.findMaxAverage(vec2, 1) == 5.000000);

    vector<int> vec3 = {0, 4, 0, 3, 2};
    assert(sol.findMaxAverage(vec3, 1) == 4.0000);
}
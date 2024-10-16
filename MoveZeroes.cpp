// LeetCode 75 - 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                length--;
                i--;
            }
        }
    }
};

int main() {
    Solution sol;

    vector<int> test1 = {0, 1, 0, 3, 12};
    vector<int> test1ans = {1, 3, 12, 0, 0};
    sol.moveZeroes(test1);
    assert(test1 == test1ans);

    vector<int> test2 = {0, 0, 1};
    vector<int> test2ans = {1, 0, 0};
    sol.moveZeroes(test2);
    assert(test2 == test2ans);
}
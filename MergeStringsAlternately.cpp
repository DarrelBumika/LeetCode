// LeetCode 75 - 1768. Merge String Alternately
// https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) result += word1[i];
            if (i < word2.length()) result += word2[i];
            i++;
        }
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.mergeAlternately("ab", "pqrs");
}
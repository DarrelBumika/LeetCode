// LeetCode 75 - 1732. Find the Highest Altitude
// https://leetcode.com/problems/find-the-highest-altitude?envType=study-plan-v2&envId=leetcode-75

#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0, latitude = 0;
        for (int lat: gain) {
            latitude += lat;
            highest = max(latitude, highest);
        }
        return highest;
    }
};
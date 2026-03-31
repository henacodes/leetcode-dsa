
#include <iostream>
#include <vector>
#include <map>
using namespace std;

#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices = {};
        unordered_map<int, int> look_up;
        for (int i = 0; i< nums.size(); i++) {
            int diff = target - nums.at(i);
            if (look_up.count(diff) == 1) {
                indices.push_back(look_up[diff]);
                indices.push_back(i);
                break;
            }
            look_up[nums.at(i)] = i;

        }
        return indices;
    }
};























/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_table;
        std::vector<int> ret;
        for (auto ite = nums.begin(); ite != nums.end(); ite++) {
            int num = *ite;
            auto fite = hash_table.find(target - num);
            if (fite != hash_table.end()) {
                ret.push_back(fite->second);
                ret.push_back(ite - nums.begin());
                return ret;
            }
            hash_table[num] = ite - nums.begin();
        }
        return ret;
    }
};
// @lc code=end

